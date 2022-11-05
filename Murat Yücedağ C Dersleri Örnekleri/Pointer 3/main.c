#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf='k';
    char *pt=&harf;

    printf("Adres: %x\n",pt); //62fe17
    pt++;
    printf("Adres2: %x\n",pt); //62fe18
    pt--;
    printf("Adres3: %x\n",pt); //62fe17
    pt=pt+5;
    printf("Adres4: %x",pt); //62felc
    return 0;
}
