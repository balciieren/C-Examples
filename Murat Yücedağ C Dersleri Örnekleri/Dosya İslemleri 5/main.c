#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *metinbelgesi;
    char veri1[20]="Bilgisayar";
    char veri2[20]="Muhendisligi";
    char veri3[20]="Bolumu";

    metinbelgesi=fopen(‪"C:\\Users\\Eren Balci\\Desktop\\bilgi3.txt","w");

    fputs(veri1,metinbelgesi);

    fputs(veri2,metinbelgesi);

    fputs(veri3,metinbelgesi);
    return 0;
}
