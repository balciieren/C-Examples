#include <stdio.h>
#include <stdlib.h>

//Klavyeden taban sayisi girilen dik üçgenin yildiz (*) sembolü ile cizdirilen
//programi kodlayiniz.
/*
int main()
{
    int i,j;
    int yukseklik;
    printf("Yuksekliði giriniz: ");
    scanf("%d",&yukseklik);

    for(i=1;i<=yukseklik;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/
//1+5+9+13+...+81 dizisinin toplamini bulan programi kodlayin.
/*
int main()
{
    int i,toplam=0;
    for(i=1;i<=81;i+=4)
    {
        toplam=toplam+i;
    }
    printf("Toplam: %d",toplam);
    return 0;
}
*/
// 2/1/0/0/2/1/1/2/1/0
//Bir futbol takýmýnýn 10 haftalýk maç istatistikleri verilen dizide bulunmaktadir.
//bu dizide 2'ler galibiyetleri, 1'ler maðlubiyetleri 0'lar ise beraberlikleri belirtmektedir.
//Bu takýmýn küme düþmemesi için 12 puan almasi gerekmektedir. Verilenlere göre bu takým
//10 hafta sonunda kümede kalýp kalmadýðýný puan ile birlikte ekrana yazan programi C dilinde
//yaziniz. NOT: Galibiyetlere 3 puan, maðlubiyetlere 0 puan, beraberliklere de 1 puan verilecektir.
//Ýþlemler dizi kullanilarak gerçekleþtirelecektir.
int main()
{
    int skor[10]={2,1,0,0,2,1,1,2,1,0};
    int i,puan=0;

    for(i=0;i<10 ;i++)
    {
        if(skor[i]==2)
        {
            puan=puan+3;
        }
        if(skor[i]==0)
        {
            puan=puan+1;
        }
    }
    if(puan>=12)
    {
        printf("Puaniniz: %d ligde kaldiniz",puan);
    }
    else
    {
        printf("Puaniniz: %d ligden düstünüz",puan);
    }

    return 0;
}
