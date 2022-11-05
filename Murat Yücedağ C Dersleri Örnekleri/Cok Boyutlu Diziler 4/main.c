#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //2x2 boyutundaki 2 matrisin toplamini bulan c algoritmasi
    int m1[2][2]={10,12,15,18};
    int m2[2][2]={8,11,14,6};
    int toplam[2][2];

    int i,j,k,l;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            toplam[i][j]=m1[i][j]+m2[i][j];
        }
    }
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf("%d ",toplam[l][k]);
        }
        printf("\n");
    }

    getch();
    return 0;
    }
    */
    //Klavyeden girilen matris sayisi ile yazilan deðerleri toplama
    int i,j,k,l;

	printf("Enter matris dimension (row first):");
	scanf("%d",&i);

	printf("Enter matris dimension (column):");
	scanf("%d",&j);

	int m1[i][j];
	int m2[i][j];

	for(k=0;k<i;k++)
	{
		for(l=0;l<j;l++)
		{
			printf("Enter value [%d][%d] of matris 1:",k+1,l+1);
			scanf("%d",&m1[k][l]);

			printf("Enter value [%d][%d] of matris 2:",k+1,l+1);
			scanf("%d",&m2[k][l]);
		}
	}
	printf("\n\n");

	int msum[i][j];
	int m,n;
	for(m=0;m<i;m++)
	{
		for(n=0;n<j;n++)
		{
			msum[m][n]=m1[m][n]+m2[m][n];
		}
	}

	int x,y;

	for(x=0;x<i;x++)
	{
		for(y=0;y<j;y++)
		{
			printf("%d ",msum[x][y]);
		}
		printf("\n");
	}
    getch();
    return 0;
    }
