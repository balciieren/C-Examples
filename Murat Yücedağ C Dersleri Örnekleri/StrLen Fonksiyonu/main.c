#include <stdio.h>
#include <stdlib.h>
//Örnek 1
//kelime uzunluðunu gösteren algoritma
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
