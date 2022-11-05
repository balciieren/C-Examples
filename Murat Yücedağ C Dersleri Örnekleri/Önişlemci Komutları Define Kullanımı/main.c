#include <stdio.h>
#include <stdlib.h>
#define puan 2.19
#define puan2 3.47

int main()
{
    int Turkce,Matematik;
    printf("Turkce Netiniz: ");
    scanf("%d",&Turkce);

    printf("Matematik Netiniz: ");
    scanf("%d",&Matematik);

    float SozelPuan,SayisalPuan;

    SozelPuan=Turkce*puan+Matematik*puan2+50.25;

    SayisalPuan=Turkce*puan+Matematik*puan2+51.45;

    printf("Toplam Sozel Puaniniz: %5.2f \n",SozelPuan);
    printf("Toplam Sayisal Puaniniz: %5.2f",SayisalPuan);
    return 0;
}
