#include <stdio.h>
#include <stdlib.h>
/*
//Fonksiyon ile kup bulma
int kupbul(int sayi)
{
    int sonuc=sayi*sayi*sayi;
    return sonuc;
}
int main()
{
    int s;
    printf("Sayiyi Girin: ");
    scanf("%d",&s);
    kupbul(s);
    printf("\n\n Sonuc: %d",kupbul(s));
    return 0;
}
*/
//Klavyede girdi�imiz en ve boy oranina g�re d�rtgen
void dortgen(int kisa,int uzun)
{
    int i,j;
    for(i=0;i<uzun;i++)
    {
        for(j=0;j<kisa;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
   dortgen(4,10);
   return 0;
}
