#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Klavyeden Girilen Sehir isimlerinin dizi icersini alip daha sonra ekrana okutma
    /*
    char sehir[3][15];
    int i,sayi;
    sayi=3;
    for(i=0;i<sayi;i++)
    {
    printf("%d.Sehirin ismini giriniz: ",i+1);
    scanf("%s",sehir[i]);

    }

    printf("Girmis oldugunuz sehir isimleri: \n");

    for(i=0;i<sayi;i++)
    {
    printf("%s\n",sehir[i]);
    }
    getch();
    return 0;
    }
    */
    //Dizinin eleman sayisi belirleme ve klavye ile girilen sayilari dizi icerisini alma
    //Dizinin icersinine aldðimiz deðerleri toplam ve ortalamasini bulma
    int dizi[100];
    int i,sayi;
    int toplam=0;
    int ortalama;

    printf("Eleman Sayisi: ");
    scanf("%d",&sayi);

    for(i=0;i<sayi;i++)
    {
        printf("Dizinin %d.degerini girin: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\n\n");

    for(i=0;i<sayi;i++)
    {
        {
        printf("%d ",dizi[i]);
        }

        toplam=toplam+dizi[i];
    }
    printf("\nToplam: %d\n",toplam);

    ortalama=toplam/sayi;
    printf("Ortalama %d\n",ortalama);
    getch();
    return 0;
    }
