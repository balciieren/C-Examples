#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//SQRT komutu ile karekök alma
/*
int main()
{
    int sayi;
    double sonuc;
    printf("Sayiyi Girin: ");
    scanf("%d",&sayi);
    sonuc=sqrt(sayi);
    printf("Sonuc: %.6f",sonuc);
    return 0;
}
*/
//POW komutu bir sayinin üstünü almaya yarar.
/*
int main()
{
    int x,y;
    int sonuc;
    printf("Tabani Girin: ");
    scanf("%d",&x);
    printf("Ustu Girin: ");
    scanf("%d",&y);

    sonuc=pow(x,y);
    printf("Sonuc: %d",sonuc);
    return 0;
}
*/
//CEÝL = bir sayiyi bir üst sayiya yuvarlar.
//FLOOR = bir sayiyi bir alt sayiya yuvalar.
/*
int main(){
    double sayi,sonuc1,sonuc2;

    printf("Degerini Girin: ");
    scanf("%lf",&sayi);
    sonuc1=floor(sayi);
    printf("Sonuc: %.f",sonuc1);
    printf("\n");
    sonuc2=ceil(sayi);
    printf("Sonuc: %.f",sonuc2);
    return 0;
}
*/
//FABS = herhangibi bir sayinin negatif deðerini pozitif deðere ceviriyor
//bildiðimiz mutlak deðer görevi görüyor.
/*
int main(){

    double sayi,sonuc;
    printf("Sayiyi Girin: ");
    scanf("%lf",&sayi);
    sonuc=fabs(sayi);
    printf("Sonuc: %.lf",sonuc);

    return 0;
}
*/
//LOG = herhangibi bir sayinin logaritmasini buluyor.
/*
int main(){

    double sayi,sonuc;
    printf("Sayiyi Girin: ");
    scanf("%lf",&sayi);
    sonuc=log(sayi);
    printf("Sonuc Logaritma: %.7lf",sonuc);

    return 0;
}
*/
//SÝN = Girdiðiniz derecenin sin deðerini bulur.
//COS = Girdiðiniz derecenin cos deðerini bulur.
int main(){

    double derece,sonucsin,sonuccos;

    printf("Dereceyi Girin: ");
    scanf("%lf",&derece);

    sonucsin=sin(derece);
    printf("Sinus: %lf\n",sonucsin);

    sonuccos=cos(derece);
    printf("Cosinus: %lf",sonuccos);


    return 0;
}
