#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Örnek 1
    /*
    int i;
    for(i=0;i<=5;i++)
    {
      printf("*****\n");
    }
    getch();
    return 0;
    }
    */
    /*
    int i,j;
    for(i=1;i<=5;i++)
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
    //klavyeden girilen yatay ve dikey kenara göre dikdörtgen çizdirme:
	int i,n=1,vertical,horizontal;

	printf("Horizontal Side: ");
	scanf("%d",&horizontal);
	printf("Vertical Side: ");
	scanf("%d",&vertical);


	while(n<=vertical)
	{
		for(i=1;i<=horizontal;i++)
		{
			printf("* ");
		}
		printf("\n");
		n++;
	}
    getch();
	return 0;
    }
