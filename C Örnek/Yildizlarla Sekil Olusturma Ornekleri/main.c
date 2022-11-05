#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Örnek 1

    /*
    *************
    /*

    /*
    int i;

    for(i=0; i<5; i++)
    {
        printf("*");
    }
    return 0;
    }
    */

    // Örnek 2

    //Klavyeden girilen sayi kadar yildiz yapma

    /*
    *        1 yildiz + \n
    **       2 yildiz + \n
    ***      3 yildiz + \n
    ****     4 yildiz + \n
    *****    5 yildiz + \n
    ******   6 yildiz + \n
    */

    /*
    int i,k;
    int giris;
    int yildiz = 1;
    printf("Giris: ");
    scanf("%d",&giris);

    for(k=0; k<giris; k++)
    {
        for(i=0; i< yildiz; i++)
        {
        printf("*");
        }
        printf("\n");
        yildiz++;
    }

    return 0;
    }
    */

    // Örnek 3

    //Girilen sayiya göre hem bosluk birakip +1 hep yildiz ekleyen algoritma

    /*
    ..* 2 bosluk 1 yildiz
    .** 1 bosluk 2 yildiz
    *** 0 bosluk 3 yildiz
    */

    /*
    .....* 5 bosluk 1 yildiz
    ....** 4 bosluk 2 yildiz
    ...*** 3 bosluk 3 yildiz
    ..**** 2 bosluk 4 yildiz
    .***** 1 bosluk 5 yildiz
    ****** 0 bosluk 6 yildiz
    */

    /*
    int i,k;
    int giris, bosluk;
    int yildiz = 1;
    printf("Giris: ");
    scanf("%d",&giris);

    yildiz;
    bosluk = giris - 1;

    for(k=0; k<giris; k++)
    {
        for(i=0; i< bosluk; i++)
        {
        printf(" ");
        }

        for(i=0; i< yildiz; i++)
        {
        printf("*");
        }
        printf("\n");
        yildiz++;
        bosluk--;
    }

    return 0;
    }
    */

    // Örnek 4

    // Girilen sayiya göre hem +1 bosluk ekliyor hemde yildizlari +2 artiriyor

    /*
    ..*     2 bos 1 yildiz
    .***    1 bos 3 yildiz
    *****   0 bos 5 yildiz
    */

    /*
    .....*       5 bos 1 yildiz
    ....***      4 bos 3 yildiz
    ...*****     3 bos 5 yildiz
    ..*******    2 bos 7 yildiz
    .*********   1 bos 9 yildiz
    ***********  0 bos 11 yildiz
    */

    /*
    int i,k;
    int giris, bosluk;
    int yildiz = 1;
    printf("Giris: ");
    scanf("%d",&giris);

    yildiz;
    bosluk = giris - 1;

    for(k=0; k<giris; k++)
    {
        for(i=0; i< bosluk; i++)
        {
        printf(" ");
        }

        for(i=0; i< yildiz; i++)
        {
        printf("*");
        }
        printf("\n");
        yildiz += 2;
        bosluk--;
    }

    return 0;
    }
    */

    // Örnek 5

    //Girdðimiz sayiya göre pirlanta seklinde yildizlar sekil oluþturma algoritmasi

    /*

      *
     ***
    *****
     ***
      *

        *
       ***
      *****
     *******
    *********
   ***********
    *********
     *******
      *****
       ***
        *
    */

    /*
    int i,k;
    int giris, bosluk;
    int yildiz = 1;
    printf("Giris: ");
    scanf("%d",&giris);

    yildiz;
    bosluk = giris - 1;

    for(k=0; k<giris; k++)
    {
        for(i=0; i< bosluk; i++)
        {
        printf(" ");
        }

        for(i=0; i< yildiz; i++)
        {
        printf("*");
        }
        printf("\n");
        yildiz += 2;
        bosluk--;
    }
    yildiz -= 4;
    bosluk = 1;

    for(k=0; k<giris - 1; k++)
    {
        for(i=0; i< bosluk; i++)
        {
        printf(" ");
        }

        for(i=0; i< yildiz; i++)
        {
        printf("*");
        }
        printf("\n");
        yildiz -= 2;
        bosluk++;
    }

    return 0;
    }
    */

    // Örnek 6

    // Girdiðimiz deðere  göre * cizip yanlarina / \ bu cizgileri koyan algoritma

    /*
            /\
           /**\
          /****\
         /******\
        /********\
       /**********\
      /************\
    */

    /*
    int i,k;
    int giris, bosluk;
    int yildiz;
    printf("Giris: ");
    scanf("%d",&giris);

    yildiz = 2;
    bosluk = giris - 1;

    for(k=0; k<giris; k++)
    {
        for(i=0; i< bosluk; i++)
        {
        printf(" ");
        }

        for(i=0; i< yildiz; i++){
        if (i == 0)
            printf("/");
        else if (i == yildiz - 1)
            printf("\\");
        else
            printf("*");
        }
        printf("\n");
        yildiz += 2;
        bosluk--;
    }
    return 0;
    }
    */

    // Örnek 7

    // Girdiðimiz deðere  göre * cizip yanlarina / \ bu cizgileri koyan algoritma


    //           /\
    //          /**\
    //         /****\
    //        /******\
    //        \******/
    //         \****/
    //          \**/
    //           \/

    /*
    int i,k;
    int giris, bosluk;
    int yildiz;
    printf("Giris: ");
    scanf("%d",&giris);

    yildiz = 2;
    bosluk = giris - 1;

    for(k=0; k<giris; k++)
    {
        for(i=0; i< bosluk; i++)
        {
        printf(" ");
        }

        for(i=0; i< yildiz; i++){
        if (i == 0)
            printf("/");
        else if (i == yildiz - 1)
            printf("\\");
        else
            printf("*");
        }
        printf("\n");
        yildiz += 2;
        bosluk--;
    }

    yildiz -=2;
    bosluk = 0;

    for(k=0; k<giris; k++)
    {
        for(i=0; i< bosluk; i++)
        {
        printf(" ");
        }

        for(i=0; i< yildiz; i++){
        if (i == 0)
            printf("\\");
        else if (i == yildiz - 1)
            printf("/");
        else
            printf("*");
        }
        printf("\n");
        yildiz -= 2;
        bosluk++;
    }

    return 0;
    }
    */
