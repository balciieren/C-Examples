#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int matris[2][3]={10,20,30,40,50,60};
    printf("%d\n",matris[0][2]);
    printf("%d",matris[1][1]);
    getch();
    return 0;
    }
    */
    int matris[2][3]={10,20,30,40,50,60};

    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
    }
