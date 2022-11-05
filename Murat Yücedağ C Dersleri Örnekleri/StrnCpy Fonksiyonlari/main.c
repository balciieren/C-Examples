#include <stdio.h>
#include <stdlib.h>

//strcpy = belirli cümleyi ayni sekilde kendisine kopyaliyor.
/*
int main()
{
    char kaynak[30]="Merhaba Balikesir";
    char kopya[30]="";

    strcpy(kopya,kaynak);
    printf("%s",kopya);
    return 0;
}
*/
//strncpy = belirtiðimiz sayiya kadar cümleyi kopyaliyor.
int main()
{
    char nereden[30]="Merhaba Ankara";
    char nereye[30]="";

    strncpy(nereye,nereden,7);
    printf("%s",nereye);

    return 0;
}
