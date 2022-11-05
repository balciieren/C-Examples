#include <stdio.h>
#include <stdlib.h>


/*
//100 ile 999 arasinda basamak sayilari birbirinde farkli kac sayi vardir?
  int main()
    {
    int sayac=0;
    int i;
    int a,b,c;

    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=(i/10)%10;
        c=i%10;
        if(a!=b && a!=c && b!=c)
        {
            sayac++;
        }
    }
    printf("%d",sayac);
    getch();
    return 0;
    }
    */
    //Asağidaki programin ekran ciktisi ne olur?
    //cevap 42'dir
    /*
    int main()
    {
        int a=5;
        int b=4;
        int c=1;
        int i;

        a=b*a+c-4;
        b=c*a+2;
        for(i=0;i<=4;i++)
        {
            c=c+1;
        }
        int toplam=a+b+c;
        printf("%d",toplam);
    getch();
    return 0;
    }
    */
    //Klavyeden girilen sayinin tam bölenlerini bulan programi kodlayin
    /*
    int main()
    {
       int sayi,i;
       printf("Sayiyi girin: ");
       scanf("%d",&sayi);

       for(i=1;i<=sayi;i++)
       {
           if(sayi%i==0)
           {
               printf("%d\n",i);
           }
       }

    return 0;
    }
    */
    //Girdiğimiz sayinin küpünü bulan algoritma
    int main()
    {
        int sayi,sonuc;
        printf("Sayiyi Girin: ");
        scanf("%d",&sayi);

        sonuc=sayi*sayi*sayi;
        printf("%d",sonuc);
    return 0;
    }

