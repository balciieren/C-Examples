#include <stdio.h>
#include <stdlib.h>

int main()
{
    //While Döngüsü calisma mantigi
    /*
    int i;
    i=1;
    while(i<=5)
    {
        printf("Merhaba Ege Bolgesi\n");
        i++;
    }
    return 0;
    }
    */
    // 1 ile 20 arasýnda ki cift sayilari listeleyen
    // ama 14 sayisini listelemeyen c komutunu yazin.
    /*
    int i;
    i=1;

    while(i<=20)
    {
        if(i%2==0 && i!=14)
            {
                printf(" %d",i);
            }
        i++;
    }
    return 0;
    }
    */
    // 1 ile 10 arasinda ki sayilarin while döngüsü ile listeleyen c kodu
    /*
    int i=0;
    while(i<=10)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
    }
    */
    //Girilen sayinin faktoriyelini while ile bulan kod.
    /*
    int sayi,faktoriyel;
    faktoriyel=1;
    sayi=5;
    while(sayi>1)
    {
        faktoriyel=faktoriyel*sayi;
        sayi--;
    }
    printf("Sonuc: %d",faktoriyel);
    return 0;
    }
    */
    //klavyeden girilen deðer ile faktoriyeli bulun
	int a,faktor;
	faktor=1;
	printf("bir sayi giriniz:");
	scanf("%d",&a);
	while(a>1){
		faktor=faktor*a;
		a--;
	}
	printf("faktoryeliniz: %d",faktor);

	return 0;
    }
