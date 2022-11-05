#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fibonacci dizisini hesaplama
    //Fibonacci dizisinin ilk 10 elemani hesaplama
    /*
    int a,b,c,i;
    a=1;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=1;i<=8;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
    */
    //tri fibonnaci hesaplama
    int a,b,c,d,i;
    a=1;
    b=1;
    c=1;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    for(i=1;i<=7;i++)
    {
        d=a+b+c;
        a=b;
        b=c;
        c=d;
        printf("%d\n",d);
    }
    return 0;
    }
