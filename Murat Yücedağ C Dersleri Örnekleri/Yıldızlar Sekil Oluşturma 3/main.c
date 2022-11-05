#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int en,boy,i,j;
    printf("En Degeri: ");
    scanf("%d",&en);
    printf("Boy Degeri: ");
    scanf("%d",&boy);

    for(i=1;i<=boy;i++)
    {
        for(j=1;j<=en;j++)
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
    int i,j,taban;
    printf("Taban Degerini Girin: ");
    scanf("%d",&taban);

    for(i=0;i<=taban;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
    }
    */
    //Klavyeden Girilen içi dolu ücgen oluþturma
    int i,j,uzunluk;
	printf("Taban uzunluk:");
	scanf("%d",&uzunluk);

	for(i=1;i<=uzunluk;i++)
	{
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}

		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");

	}
    getch();
    return 0;
    }
