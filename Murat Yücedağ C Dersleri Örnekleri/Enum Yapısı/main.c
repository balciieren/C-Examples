#include <stdio.h>
#include <stdlib.h>

enum sehirler
{
    hatali,adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
};

int main()
{
    enum sehirler il;
    il=adiyaman;
    printf("%d",il);
    return 0;
}
