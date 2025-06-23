## SSD Wiper
Bu C programı, Windows sistemlerinde bir SSD'nin (veya sabit diskin) her sektörünü sıfırlamak için kullanılır. Program, diskin tüm verilerini sıfırlarla yazar ve böylece disk üzerindeki mevcut verileri tamamen siler.

## Özellikler
Fiziksel bir diski (PhysicalDrive0) açar ve erişir.

Diskin toplam uzunluğunu alarak hangi kadar veri yazılacağını hesaplar.

Diskin her sektörüne sıfır (0) yazar (512 byte per sektör).

Verilerin geri dönüşümsüz şekilde silinmesi için kullanılabilir.

## Kullanım
Programı derleyin ve çalıştırın. Bu işlem, diskinizin her sektörüne sıfır yazacaktır.

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

Çalıştırılabilir dosyayı başlatın.
