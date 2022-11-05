#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char kitapad[20];
    printf("Kitabin Adini Giriniz: ");
    scanf("%s",kitapad);
    printf("Girmis Oldugunuz kitapadi: %s",kitapad);
    */

    char Ad[10],Soyad[10],Yas[2],Sehir[13],Meslek[10];
    printf("Adiniz:");
    scanf("%s",Ad);

    printf("Soyadiniz:");
    scanf("%s",Soyad);

    printf("Yasiniz:");
    scanf("%s",Yas);

    printf("Sehriniz:");
    scanf("%s",Sehir);

    printf("Mesleginiz:");
    scanf("%s",Meslek);

    printf("/n");

    printf("Adi: %s - Soyadi: %s\n",Ad,Soyad);
    printf("Yasi: %s\n",Yas);
    printf("Meslek: %s - Sehir: %s",Meslek,Sehir);

    return 0;
}
