#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Satir ve Sutunu Klavyeden Girdigimiz De�erleri ramde tutup ekran yazdiran algoritma
    int satir,sutun,i,j,k,n;

    printf("Satir Sayisi: ");
    scanf("%d",&satir);

    printf("Sutun Sayisi: ");
    scanf("%d",&sutun);

    int matris[satir][sutun];

    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("\n[%d][%d] ---> ",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
    printf("\n\nOlusan Matris\n");
    for(k=0;k<satir;k++)
    {
        for(n=0;n<sutun;n++)
        {
            printf(" %d ",matris[k][n]);
        }
        printf("\n");
    }

    return 0;
}
