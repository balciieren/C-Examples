#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kitap[40];
    printf("Ad: ");
    scanf("%s",kitap);

    printf("%s",kitap);

    printf("\n");

    printf("%18s",kitap); //18 karakter �ne atadi

    printf("\n");

    printf("%20.5s",kitap); //20 karakter �ne atayip ve son 5 harfinin silip yazdi

    printf("\n");

    printf("%-20s",kitap); //char 40 olarak belirt�imiz bellegi 20 ye indirdi.
    return 0;
}
