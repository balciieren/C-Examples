#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=20;
    int *s=&sayi;

    //Sayiyi Ekrana Yazdirma
    printf("Deger: %d\n",sayi);

    //Adresi Ekrana Yazdirma
    printf("Adres: %x",s);

    char harf='a';
    char *h=&harf;
    printf("\n\n-----------\n\n");

    //Harfi Ekrana Yazdirma
    printf("Harf: %c\n",harf);

    //Adresi Ekrana Yazdirma
    printf("Adres: %x",h);
    return 0;
}
