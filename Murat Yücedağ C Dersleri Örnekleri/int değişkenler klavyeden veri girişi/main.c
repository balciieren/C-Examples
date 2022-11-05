#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int sayi;
    printf("Bir Sayi Giriniz:");
    scanf("%d",&sayi);
    printf("Girmis olduðunuz sayi: %d",sayi);
    */
    /*
    //Girilen 2 sayinin toplam,fark ve carpimini bulan c programi
    int sayi1,sayi2,toplam,fark,carpim;
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d",&sayi1);

    printf("İkinci Sayiyi Giriniz: ");
    scanf("%d",&sayi2);

    toplam=sayi1+sayi2;
    fark=sayi1-sayi2;
    carpim=sayi1*sayi2;

    printf("Toplam: %d\n",toplam);
    printf("Fark: %d\n",fark);
    printf("Carp: %d\n",carpim);
    */

    //klavyeden bir kenari girilen bir karenin alan ve çevresini bulan c programi
    /*
    int kenar,alan,cevre;

    printf("Karede Alan ve Cevre Hesabi\n\n");

    printf("Bir kenari girin: ");
    scanf("%d",&kenar);

    alan=kenar*kenar;
    cevre=kenar*4;

    printf("Karenin Alani: %d\n",alan);
    printf("Karenin Cevresi: %d",cevre);
    */
    //Klavyeden 3 sinav notu girilen ögrencinin ortlamasini bulan c programi
    /*
    int s1,s2,s3,ort;

    printf("Birinci Sinav: ");
    scanf("%d",&s1);

    printf("Ýkinci Sinav: ");
    scanf("%d",&s2);

    printf("Ucuncu Sinav: ");
    scanf("%d",&s3);

    ort=(s1+s2+s3)/3;

    printf("Ortalamaniz: %d",ort);
    */

    // Bir sinemada ücretlendirme þu  sekildedir;

    // Mýsýr: 2 TL
    // Kola: 2 TL
    // Su: 1 TL
    // Bilet: 8 TL

    // Klavyeden Girilen almiş olduðu misir,kola,su ve bilet adeditini giren kisin toplam ne kadar ödeyeceðini bulan c programi
    // Eðerki o üründen almamişşa 0 girilecek.

    int su,kola,misir,bilet,toplam;

    printf("Misir Adeti: ");
    scanf("%d",&misir);

    printf("Kola Adeti: ");
    scanf("%d",&kola);

    printf("Su Adeti: ");
    scanf("%d",&su);

    printf("Bilet Adeti: ");
    scanf("%d",&bilet);

    toplam=misir*2+kola*2+su*1+bilet*8;
    printf("Toplam: %d",toplam);
    printf(" TL...");
    return 0;
}
