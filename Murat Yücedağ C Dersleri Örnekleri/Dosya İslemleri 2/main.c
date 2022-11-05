#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("‪C:\\Users\\Eren Balci\\Desktop\\deneme.txt","w");
    putc('a',dosya);
    putc('b',dosya);

    fclose(dosya);
    return 0;
}
