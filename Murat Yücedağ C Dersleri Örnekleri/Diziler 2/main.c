#include <stdio.h>
#include <stdlib.h>

int main()
{
    //for ile dizileri yazdirma
    /*
    int sayilar[] ={5,8,7,3,6,9};
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d\n",sayilar[i]);
    }
    getch();
    return 0;
    }
    */
    //Dizi icerisindeki sayilari for ile toplama
    int sayilar[]={10,15,20,35};
    int toplam=0;
    int i;
    for(i=0;i<4;i++)
    {
        toplam=toplam+sayilar[i];
    }
    printf("Toplam: %d",toplam);
    getch();
    return 0;
    }

