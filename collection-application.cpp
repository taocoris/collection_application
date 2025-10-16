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
