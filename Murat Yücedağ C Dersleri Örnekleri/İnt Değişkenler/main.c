#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int sayi;
    sayi=6;
    printf("Girdi�iniz sayi: %d",sayi);
    */
    /*
    int sayi1,sayi2,toplam;
    sayi1=40;
    sayi2=80;
    toplam=sayi1+sayi2;
    printf("Toplam sonuc: %d",toplam);
    */
    /*
    int sayi1,sayi2,topla,carp,fark,bol;
    sayi1=50;
    sayi2=10;
    topla=sayi1+sayi2;
    fark=sayi1-sayi2;
    carp=sayi1*sayi2;
    bol=sayi1/sayi2;

    printf("Toplam: %d\n",topla);
    printf("Fark: %d\n",fark);
    printf("Carpim: %d\n",carp);
    printf("Bolum: %d\n",bol);
    */
    /*
    int s1,s2,islem;
    s1=10;
    s2=6;
    islem=s1/s2;
    printf("Sonuc: %d",islem);
    */

    //Karenin alan ve �evresi
    //De�er: Bir kenar
    //Alan: Kenar * Kenar
    //�evre: Kenar * 4
    /*
    int kenar,alan,cevre;
    kenar=10;
    alan= kenar*kenar;
    cevre=kenar*4;
    printf("Alan: %d\n",alan);
    printf("Cevre: %d",cevre);
    */

    //Dikd�rtgen alan ve cevresi
    //De�er: k�sa kenar, uzun kenar
    //Alan: k�saKenar * uzunkenar
    //Cevre: k�sakenar+k�sakenar+uzunkenar+uzunkenar

    int kisa,uzun,alan,cevre;
    kisa=8;
    uzun=12;
    alan= kisa * uzun;
    cevre=2*(kisa+uzun);
    printf("Alan: %d\n",alan);
    printf("Cevre: %d",cevre);


    return 0;
}
