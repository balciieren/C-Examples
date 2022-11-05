#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char kitapadi[20]="Mufettis";
    char kitapyazar[10]="Gogol";

    printf("%s\n",kitapadi);
    printf("%s",kitapyazar);
    */
    /*
    char kitaptur[10]="Tiyatro Kitabi";
    printf("Kitapturu: %s",kitaptur);
    */

    char kitapad[20]="Avcunuzda ki Kelebek";
    char yazar[30]="Ahmet Serif izgoren";
    char turu[10]="Hikaye";
    char sayfa[3]="124";
    char basimyil[4]="2001";

    printf("******** Kitap Tanitim ********\n\n\n");
    printf("Kitapad: %s - Kitapyazar: %s\n",kitapad,yazar);
    printf("Turu: %s\n",turu);
    printf("Sayfa Sayisi: %s\n",sayfa);
    printf("Basim Yili: %s",basimyil);

    return 0;
}
