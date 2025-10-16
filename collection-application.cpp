/*
    ---------------------------------------------------------------
    6-Bit Kodlama Sistemi ile Karakter Tabanlı Toplama Uygulaması
    ---------------------------------------------------------------
    Bu program, Unix öncesi sistemlerin sınırlı Girdi/Çıktı (I/O)
    ortamlarını simüle eder. Program kullanıcıdan iki adet tek haneli
    rakamı ASCII karakterleri olarak okur, bu karakterlerin sayısal
    değerlerini çözümler ve toplar.

    Eğer toplama sonucu 9'dan büyükse, bu sistemin sınırını aşacağı
    için hata mesajı verir.

    Kodlama mantığı: 
    ASCII karakter '0' ile '9' arası 48–57 aralığında temsil edilir.
    Yani '0' karakterinin kodu 48, '1' karakterinin kodu 49’dur.
    Dolayısıyla karakterden sayısal değeri elde etmek için (karakter - '0')
    işlemi yapılır.

    Yazan: [Adını buraya yaz]
    Tarih: [Tarih]
*/

#include <stdio.h>

int main() {
    char ch1, ch2;   // Kullanıcıdan alınacak iki karakter (tek haneli rakam)
    int num1, num2;  // Sayısal karşılıkları
    int toplam;

    printf("İlk rakamı giriniz (0-9 arası): ");
    ch1 = getchar(); // İlk karakteri oku
    getchar();       // Enter karakterini temizle

    printf("İkinci rakamı giriniz (0-9 arası): ");
    ch2 = getchar(); // İkinci karakteri oku

    // Karakterlerin rakam olup olmadığını kontrol et
    if (ch1 < '0' || ch1 > '9' || ch2 < '0' || ch2 > '9') {
        printf("\nHata: Girilen karakterler rakam değil!\n");
        return 1;
    }

    // ASCII karakterden sayısal değeri çıkar
    num1 = ch1 - '0';
    num2 = ch2 - '0';

    // Toplama işlemi
    toplam = num1 + num2;

    // Sonucun 9'u aşıp aşmadığını kontrol et
    if (toplam > 9) {
        printf("\nHata: Toplama sonucu 9'u aşıyor (%d)!\n", toplam);
    } else {
        // Sonucu tekrar karaktere çevirip (sayısal karakter olarak) yazdır
        printf("\nToplam: %c\n", toplam + '0');
    }

    return 0;
}