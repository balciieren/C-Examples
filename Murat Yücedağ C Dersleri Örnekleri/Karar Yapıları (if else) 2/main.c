#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Sayinin tek mi yada cift mi olduðunu bulan modunu alarak bulma
    /*
    int sayi;
    sayi=8;
    if (sayi%2==0)
    {
        printf("Sayi Cifttir.");
    }
    else
    {
        printf("Sayi Tektir");
    }
    return 0;
    }
    */
    //Klavyeden Girilen sayi 5'e tam bölünyorsa...
    /*
    int x;
    printf("Sayiyi Girin: ");
    scanf("%d",&x);
    if (x%5==0)
    {
        printf("Sayi 5'e tam bolunur");
    }
    else
    {
        printf("Sayi 5'e tam bolunmez");
    }
    return 0;
    }
    */
    //Klavyeden Girilen bir sayinin 5'e ve 3'e tam bölünüyor mu? c algoritmasi
    /*
    int sayi;
    printf("Bir sayiyi giriniz:");
    scanf("%d",&sayi);
    if(sayi%3==0 && sayi%5==0)
    {
        printf("Sayi 3 ve 5'e tam bolunur");
    }
    else
    {
        printf("Sayi 3 ve 5'e tam bolunmez");
    }
    return 0;
    }
    */
    //Klavyeden Girilen bir sayinin 5'e veya 3'e tam bölünüyor mu? c algoritmasi
    /*
    int sayi;
    printf("Bir sayiyi giriniz:");
    scanf("%d",&sayi);
    if(sayi%3==0 || sayi%5==0)
    {
        printf("Sayi 3 veya 5'e tam bolunur");
    }
    else
    {
        printf("Sayi 3 veya 5'e tam bolunmez");
    }
    return 0;
    }
    */
    //Klavyeden girilen dereceye göre suyun durumunu yazdýran programý kodlayýn

    printf("****Suyun Durumu****");

    int su;
    printf("Sicaklik degerini giriniz:");
    scanf("%d",&su);
    if(su<=0)
    {
        printf("Su suanda buz halinde");
    }
    if(su>0 && su<100)
    {
        printf("Su sivi halde");
    }
    if(su>=100)
    {
        printf("Su buhar halinde");
    }
    return 0;
    }
