#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
    }
    */
    /*
    int i,j,k,l;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=1;k<=5;k++)
    {
        for(l=5;l>=k;l--)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
    }
    */
    //Kelebek Kanadi Oluşturma
    int uzunluk,i,j;
	printf("Kanadin yarisinin uzunlugu kac birim olsun? --> ");
	scanf("%d",&uzunluk);
	for(i=1;i<=uzunluk;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//diðer yarýsý
	for(i=1;i<=uzunluk;i++)
	{
		for(j=i;j<=uzunluk;j++)
		{
			printf("*");
		}
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(j=i;j<=uzunluk;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
	return 0;
    }

