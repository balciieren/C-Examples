#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Float Deðiþkenler

    //%f
    /*
    float sayi;
    sayi=5;
    printf("%f",sayi);
    return 0;
    }
    */
    //İki Sayiyi bölüp yüzdeli sekilde gösterme
    /*
    float sayi1,sayi2,bolum;
    sayi1=7;
    sayi2=5;

    bolum=sayi1/sayi2;
    printf("%f",bolum);
    return 0;
    }
    */
    //Ondalıklı 2 değişkeni toplama islemi c programi
    /*
    float deg1,deg2,toplam;
    deg1=5.85;
    deg2=4.37;
    toplam=deg1+deg2;
    printf("Toplam: %f",toplam);

    return 0;
    }
    */
    //3 Sinav notu girilen ögrencinin ortalamasini bulan c programi (float ile)
    /*
    float sinav1,sinav2,sinav3,ort;
    sinav1=75;
    sinav2=80;
    sinav3=81;
    ort=(sinav1+sinav2+sinav3)/3;
    printf("Ortalama: %f",ort);
    return 0;
    }
    */
    //İdeal Kilo Hesaplama c programi ile
    //(boy - 100 + yaş / 10)*0,8 --> Kadın  0,9- -- Erkek
    printf("Ideal Kilo Hesaplama");
    printf("\n");

    float boy,yas,ideal;
    boy=165;
    yas=24;
    ideal=(boy-100+yas/10)*0.8;
    printf("Kadin Ideal kilonuz: %f\n",ideal);

    float boy1,yas1,ideal1;
    boy1=180;
    yas1=24;
    ideal1=(boy1-100+yas1/10)*0.9;
    printf("Erkek Ideal kilonuz: %f",ideal1);

    return 0;
    }
