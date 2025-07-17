## English
`Disclaimer`
This software is provided "as is", without warranty of any kind, express or implied, including but not limited to the warranties of merchantability, fitness for a particular purpose and noninfringement. Use of this software is at your own risk. The author(s) shall not be held liable for any damages or data loss resulting from the use, misuse, or inability to use this software.

By using this software, you acknowledge that you understand the risks and take full responsibility for any consequences.

## Türkçe
``Yasal Uyarı``
Bu yazılım, herhangi bir açık veya zımni garanti olmaksızın, "olduğu gibi" sunulmaktadır; satılabilirlik, belirli bir amaca uygunluk veya hak ihlali gibi garantiler dahil ancak bunlarla sınırlı olmamak üzere hiçbir garanti verilmemektedir. Bu yazılımı kullanmak tamamen kendi sorumluluğunuzdadır. Yazar(lar), bu yazılımın kullanımı, yanlış kullanımı veya kullanılamamasından kaynaklanan herhangi bir veri kaybı veya zarardan sorumlu tutulamaz.

Bu yazılımı kullanarak, riskleri anladığınızı ve tüm sonuçlardan tamamen sorumlu olduğunuzu kabul etmiş olursunuz.


## 🇬🇧 GUIDE IN ENGLISH 🇬🇧

## SSD Wiper
This C program is designed to wipe every sector of an SSD (or hard disk) on Windows systems. It writes zeros across the entire disk, effectively erasing all existing data.

## Features
Opens and accesses a physical disk (e.g., PhysicalDrive0).

Retrieves the total disk size to calculate how much data to overwrite.

Writes zeroes (0x00) to every sector (512 bytes per sector).

Can be used to irreversibly erase disk data.

## Usage
Compile the program and run it as Administrator.

The program will overwrite every sector on the disk with zeroes.

## ⚠️ Use only in test environments or for disk sanitization. Running this on a real system will cause permanent data loss.

## By default, it targets PhysicalDrive0. To use it on another drive, you’ll need to modify the code accordingly.

## Warnings
**Data loss**: This program will permanently erase all data on the targeted drive. Be sure to back up any important files before using it.

**Test-only use**: Improper use may corrupt disks. Use strictly in safe or virtual environments.

## Requirements
Windows operating system.

C compiler (e.g., GCC or Visual Studio).

## Installation
Compile the code using a C compiler.

Run the resulting executable with administrator privileges.







## 🇹🇷 TÜRKÇE REHBER 🇹🇷

## SSD Wiper
Bu C programı, Windows sistemlerinde bir SSD'nin (veya sabit diskin) her sektörünü sıfırlamak için kullanılır. Program, diskin tüm verilerini sıfırlarla yazar ve böylece disk üzerindeki mevcut verileri tamamen siler.

## Özellikler
Fiziksel bir diski (PhysicalDrive0) açar ve erişir.

Diskin toplam uzunluğunu alarak hangi kadar veri yazılacağını hesaplar.

Diskin her sektörüne sıfır (0) yazar (512 byte per sektör).

Verilerin geri dönüşümsüz şekilde silinmesi için kullanılabilir.

## Kullanım
Programı derleyin ve admin olarak çalıştırın. Bu işlem, diskinizin her sektörüne sıfır yazacaktır.

Yalnızca test ortamlarında veya disk temizleme amacıyla kullanın. Gerçek verileri silmek ciddi veri kayıplarına yol açabilir.

Program, PhysicalDrive0 üzerindeki veriyi sıfırlayacaktır. Farklı bir disk üzerinde çalıştırmak istiyorsanız, kodu uygun şekilde değiştirmeniz gerekebilir.

## Uyarılar
Veri kaybı: Bu program diskinizdeki tüm verileri kalıcı olarak siler. Kullanımdan önce önemli verilerinizi yedeklediğinizden emin olun.

Yalnızca SSD veya HDD'nin test edilmesi: Bu tür programlar, yanlışlıkla kullanılabilir ve disklerinizi bozulmaya sebep olabilir. Bu yüzden yalnızca güvenli bir test ortamında çalıştırın.

## Gereksinimler
Windows işletim sistemi.

C derleyicisi (örneğin, GCC veya Visual Studio).

## Kurulum
Kodu bir C derleyicisi ile derleyin.

Çalıştırılabilir dosyayı admin olarak başlatın.
