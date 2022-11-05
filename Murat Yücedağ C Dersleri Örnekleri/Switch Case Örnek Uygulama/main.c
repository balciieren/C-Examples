#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Klavyeden girdiðimiz isleme göre dört islem yapicak switch case döngüsü
    /*
    system("Color 6");
    int sayi1,sayi2,sonuc;
    char islem;
    sayi1=75;
    sayi2=15;
    printf("islemi girin: ");
    scanf("%s",&islem);

    switch(islem)
    {
    case '+':
        sonuc=sayi1+sayi2;
        printf("Sonuc: %d",sonuc);
        break;
    case '-':
        sonuc=sayi1-sayi2;
        printf("Sonuc: %d",sonuc);
        break;
    case '*':
        sonuc=sayi1*sayi2;
        printf("Sonuc: %d",sonuc);
        break;
    case '/':
        sonuc=sayi1/sayi2;
        printf("Sonuc: %d",sonuc);
        break;
    default:
        printf("Hatali Ýslem Sembolü");
        break;
    }
    getch();
    return 0;
    }
    */
    //Klavyeden girilen Matematik Menüsüne göre islem secme
    system("Color 3");
    int islem,sayi1,kareninalan,karenincevre,sayininkupu,sayi2,sayi4,secim;
	float sonuc,daireninalan,dairenincevre,r,sayininkarakoku,sayi3;

    sayi1=12;
    sayi2=16;

    printf("Matematik Menusu\n");
    printf("******************\n\n");
    printf("1-Kareden de alan ve cevre hesabi\n");
    printf("2-Girilen Sayinin Kupu\n");
    printf("3-Cemberde alan ve cevre hesabi\n");
    printf("4-5x2+7x+9 x'e gore islemin sonucu\n");
    printf("5-Dikdörtgende alan ve cevre hesabi\n\n");
    printf("Ýsleminizi secin:");
    scanf("%d",&secim);
    switch(secim)
    {
    case 1:
        printf("Karenin Alani: %d\n",(sayi1*sayi1));
        printf("Karenin Cevresi: %d",(sayi1*4));
        break;
    case 2:
        printf("Sayinin Kupu: %d",(sayi1*sayi1*sayi1));
        break;
    case 3 :
        printf ("Cemberin yaricapinin giriniz: ");
        scanf ("%f",&r);
        daireninalan=3.1415*r*r;
        dairenincevre=2.0*3.1415*r;
        printf ("Dairenin Alani: %f\n",daireninalan);
        printf ("Dairenin Cevresi: %f",dairenincevre);
        break;
    case 4 :
        printf ("karakoku alinacak sayiyi giriniz: ");
        scanf ("%f",&sayi3);
        sayininkarakoku= sqrt(sayi3);
        printf ("Sonuc: %f",sayininkarakoku);
        break;
    case 5 :
        printf ("Bir sayi giriniz: ");
        scanf ("%d",&sayi4);
        printf ("%d", abs(-sayi4));
        break;

    default:
        printf ("Hatali Giris Yaptiniz");
    }
    getch();
    return 0;
    }
