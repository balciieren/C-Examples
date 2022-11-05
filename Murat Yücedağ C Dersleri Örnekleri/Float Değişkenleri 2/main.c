#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Klavyeden Girilen 2 tane ondalýklý sayiyi bulan c uygulamasi
    /*
    float sayi1,sayi2,toplam;
    printf("Ilk sayiyi giriniz:");
    scanf("%f",&sayi1);
    printf("Ikinci sayiyi giriniz:");
    scanf("%f",&sayi2);

    toplam=sayi1+sayi2;
    printf("Toplama Sonucu: %f",toplam);
    return 0;
    }
    */
    //Klavyeden Girilen 2 Floatli deðiþkenin birbirine bölümü
    /*
    float a,b,c;
    printf("Birinci Sayi:");
    scanf("%f",&a);
    printf("Ýkinci Sayi:");
    scanf("%f",&b);

    c=a/b;
    printf("Sonuc: %f",c);
    return 0;
    }
    */
    //Maaþi klavyeden girilen kisinin maaþina yüzde 12 zam yapýlýrsa
    //Yeni Maaþý ne kadar olur?
    /*
    printf("**** Zam Maas Hesabi ****");
    printf("\n\n");
    float maas,yenimaas;
    printf("Maasinizi Girin:");
    scanf("%f",&maas);
    yenimaas=maas+maas*12/100;
    printf("Yeni Maasiniz: %f",yenimaas);
    return 0;
    }
    */
    //Klavyeden yarýcapi girilen cemberin alan ve cevre hesabi
    //Cemberde alan:pi*r*r
    //Cemberde cevre:2*pi*r
    /*
    printf("Cemberde alan ve cevre hesabi\n");
    printf("*********************************\n");

    float yaricap,pi,alan,cevre;
    pi=3.14;
    printf("Yaricap Degeri:");
    scanf("%f",&yaricap);

    alan=pi*yaricap*yaricap;
    cevre=2*pi*yaricap;

    printf("Alan: %f\n",alan);
    printf("Cevre %f",cevre);

    return 0;
    }
    */
    //Ygs 1 Puan Türü Hesaplama
    //Türkçe:1.999
    //Matematik:3.998
    //Sosyal Bilgiler:1
    //Fen Bilgisi:2.999
    //Taban:100.160

    float turkce,matematik,sosyal,fen,taban,toplampuan;

    taban=100.160;
    printf("Turkce Netiniz:");
    scanf("%f",&turkce);

    printf("Matematik Netiniz:");
    scanf("%f",&matematik);

    printf("Sosyal Bilgiler Netiniz:");
    scanf("%f",&sosyal);

    printf("Fen Bilgisi Netiniz:");
    scanf("%f",&fen);

    toplampuan=turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
    printf("Ygs - 1 Puan Turunde Sonucunuz: %f",toplampuan);
    return 0;
    }

