#include <stdio.h>
#include <stdlib.h>

//Klavyeden taban sayisi girilen dik ��genin yildiz (*) sembol� ile cizdirilen
//programi kodlayiniz.
/*
int main()
{
    int i,j;
    int yukseklik;
    printf("Yuksekli�i giriniz: ");
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
//Bir futbol tak�m�n�n 10 haftal�k ma� istatistikleri verilen dizide bulunmaktadir.
//bu dizide 2'ler galibiyetleri, 1'ler ma�lubiyetleri 0'lar ise beraberlikleri belirtmektedir.
//Bu tak�m�n k�me d��memesi i�in 12 puan almasi gerekmektedir. Verilenlere g�re bu tak�m
//10 hafta sonunda k�mede kal�p kalmad���n� puan ile birlikte ekrana yazan programi C dilinde
//yaziniz. NOT: Galibiyetlere 3 puan, ma�lubiyetlere 0 puan, beraberliklere de 1 puan verilecektir.
//��lemler dizi kullanilarak ger�ekle�tirelecektir.
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
        printf("Puaniniz: %d ligden d�st�n�z",puan);
    }

    return 0;
}
