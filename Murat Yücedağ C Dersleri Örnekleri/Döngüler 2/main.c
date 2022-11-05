#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Sayac 10 kadar artan sekilde toplama sonuc 55
    //örnek 1+0=1 --  1+2=3 -- 2+3=5 -- 5+4==9
    /*
    int sayac=0;
    int i;
    for(i=1;i<=10;i++)
    {
        sayac=sayac+i;
    }
    printf("Sayac: %d",sayac);
    return 0;
    }
    */
    //Faktöriyel Örneði
    //5 sayisinin faktöriyel sonucu bulma
    /*
    int i;
    int faktor=1;
    for(i=1;i<=5;i++)
    {
        faktor=faktor*i;
    }
    printf("5 sayisinin faktoriyel degeri: %d",faktor);
    return 0;
    }
    */
    //Klavyeden girilen sayinin faktöriyelini bulma
    int i,sayi;
    int faktoriyel=1;

    printf("Sayi Giriniz:");
    scanf("%d",&sayi);
    for (i=1;i<=sayi;i++)
    {
        faktoriyel=faktoriyel*i;
    }
    printf("Faktoriyel Sonucunuz: %d",faktoriyel);
    return 0;
    }

