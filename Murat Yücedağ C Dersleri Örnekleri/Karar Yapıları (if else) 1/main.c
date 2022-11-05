#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int sayi=5;

    if(sayi==5)
    {
        printf("Girilen deger dogru");
    }
    else
    {
        printf("Girilen deger yanlis");
    }
    return 0
    }
    */
    //Ýki sayiyi toplayip 50'den buyuk mu yada kucuk oldugunu gösteren c algoritmasi
    /*
    int sayi1,sayi2,toplam;
    sayi1=24;
    sayi2=28;
    toplam=sayi1+sayi2;

    if(toplam>=50)
    {
        printf("Toplam degeriniz: %d - 50 den buyuk",toplam);
    }
    else
    {
        printf("Toplam degeriniz: %d - 50 den kucuk",toplam);
    }
    return 0;
    }
    */
    //Bir ogrencinin ortalamasi 50 den buyuk olursa gecti algoritmasi
    printf("Ogrenci ortalama hesap bilgi sistemi...");
    printf("\n\n");

    int s1,s2,ort;

    printf("Sinav1 degerini girin: ");
    scanf("%d",&s1);

    printf("Sinav2 degerini girin: ");
    scanf("%d",&s2);

    ort=(s1+s2)/2;
    printf("Ortalama: %d\n\n",ort);

    if(ort>=50)
    {
        printf("Tebrikler Gectiniz :)");
    }
    else
    {
        printf("Malesef Kaldiniz :(");
    }
    return 0;
    }

