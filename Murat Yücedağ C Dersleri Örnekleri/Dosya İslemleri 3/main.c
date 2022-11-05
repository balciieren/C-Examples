#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *belge;
    char karakter;
    belge=fopen("‪C:\\Users\\Eren Balci\\Desktop\\deneme.txt","r");

    do
    {
    karakter=getc(belge);

    printf("%c",karakter);
    }
    while(karakter!=EOF);
    fclose(belge);
    return 0;
}
