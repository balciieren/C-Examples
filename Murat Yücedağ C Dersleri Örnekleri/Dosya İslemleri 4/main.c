#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *belge;
    char karakter[50];

    belge=fopen("‪C:\\Users\\Eren Balci\\Desktop\\deneme.txt","r");

    fgets(karakter,50,belge);
    puts(karakter);
    fclose(belge);
    return 0;
}
