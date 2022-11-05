#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1 ile 50 arasinda 5'e tam bölünen sayilari listeleyen program
    /*
    int i;
    for(i=1;i<=50;i++)
    {
        if(i%5==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
    }
    */
    // 3 basamaklý basamaklarina ayiran programi c dilinde kodlayin.
    int sayi;
    sayi=486;
    int birler,onlar,yuzler;

    yuzler=sayi/100;
    printf("%d\n",yuzler);

    onlar=sayi/10;
    onlar=onlar%10;
    printf("%d\n",onlar);

    birler=sayi%10;
    printf("%d\n",birler);

    return 0;
    }
