#include <stdio.h>
#include <stdlib.h>
//�rnek 1
//kelime uzunlu�unu g�steren algoritma
/*
int main()
{
    printf("Katar uzunlugu: %d",strlen("merhaba dunya"));
    return 0;
}
*/
int main()
{
    char kelime[100];
    printf("Kelimeyi Girin: ");
    scanf("%s",&kelime);
    printf("Katar Uzunlugu: %d",strlen(kelime));
    return 0;
}
