#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//SQRT komutu ile karek�k alma
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
//POW komutu bir sayinin �st�n� almaya yarar.
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
//CE�L = bir sayiyi bir �st sayiya yuvarlar.
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
//FABS = herhangibi bir sayinin negatif de�erini pozitif de�ere ceviriyor
//bildi�imiz mutlak de�er g�revi g�r�yor.
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
//S�N = Girdi�iniz derecenin sin de�erini bulur.
//COS = Girdi�iniz derecenin cos de�erini bulur.
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
