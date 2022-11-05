#include <stdio.h>
#include <stdlib.h>

//puts=printf
//gets=scanf
int main()
{
    char bilgi[40];
    printf("Bilgiyi Girin:");
    gets(bilgi);
    printf("\n\n");
    puts(bilgi);
    return 0;
}
