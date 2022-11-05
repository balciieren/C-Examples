#include <stdio.h>
#include <stdlib.h>

//bir bakteri türü her saat baþý kendisini ikiye bölerek coðalmaktadir.
//Bu laboratuvarda 24 saat varsa kaç tane bakteri oluþur
/*
int main()
{
    int sayi=1;
    int i;
    for(i=1;i<=24;i++)
    {
        sayi=sayi*2;
    }
    printf("%d",sayi);
    return 0;
}
*/
//klavyeden 4 tane tam sayi alip bunlarin toplamini bulan programi kodlayin.
/*
int main()
{
    int toplam=0;
    int sayi;
    int i;
    for(i=1;i<=4;i++)
    {
        printf("%d.Sayi: ",i);
        scanf("%d",&sayi);
        toplam += sayi;
    }
    printf("Toplam Sonuc: %d",toplam);
    return 0;
}
*/
//Klavyeden 0 girilene kadar girilen sayilari toplayan program
/*
int main()
{
    int sayi;
    int toplam=0;

    while(sayi!=0)
    {
        printf("Sayi: ");
        scanf("%d",&sayi);
        toplam=toplam+sayi;
    }
    printf("%d",toplam);

    return 0;
}
*/
//Bir otoparkta ücretlendirme sistemi su sekildedir;
//0-4 Saat:10TL
//5-8 Saat:12TL
//9-12 Saat:15TL
//13++ Saat:20TL
//Klavyeden otoparkta kaç saat kaldýðý girilen aracýn ödemesi gereken tutari hesaplayan programi kodlayin
int main()
{
    int saat;
    printf("Kac Saat Kaldiniz: ");
    scanf("%d",&saat);

    if(saat>0 && saat <=4)
    {
        printf("10 TL Odeme Yapin");
    }
    if(saat>=5 && saat <=8)
    {
        printf("12 TL Odeme Yapin");
    }
    if(saat>=9 && saat <=12)
    {
        printf("15 TL Odeme Yapin");
    }
    if(saat>=13)
    {
        printf("20 TL Odeme Yapin");
    }
    return 0;
}

