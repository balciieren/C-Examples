#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ay numarasini girdi�imizde bize hangi aya kars�l�k geldi�ini g�steren program
    //Switch case ile
    /*
    int sayi;
    printf("Lutfen ay numarasini giriniz: ");
    scanf("%d",&sayi);

    switch(sayi)
    {
        case 1:printf("Ocak");
        break;
        case 2:printf("Subat");
        break;
        case 3:printf("Mart");
        break;
        case 4:printf("Nisan");
        break;
        case 5:printf("Mayis");
        break;
        case 6:printf("Haziran");
        break;
        case 7:printf("Temmuz");
        break;
        case 8:printf("Agustos");
        break;
        case 9:printf("Eyl�l");
        break;
        case 10:printf("Ekim");
        break;
        case 11:printf("Kasim");
        break;
        case 12:printf("Aralik");
        break;
        default: printf("1-12 arasi rakam seciniz"); break;
    }
    return 0;
    }
    */
    //Klavyeden girilen harfe g�re o harfin karsili�indaki ders programi
    // t--> T�rkce
    // m--> Matematik
    // s--> Sosyal Bilgiler
    // f--> Fen Bilgisi
    /*
    char ders;
    printf("Ders Kodu:");
    scanf("%s",&ders);
    switch(ders)
    {
        case 't':printf("Turkce"); break;
        case 'm':printf("Matematik"); break;
        case 's':printf("Sosyal Bilgiler"); break;
        case 'f':printf("Fen Bilgisi"); break;
        default: printf("t-m-s-f'den birini giriniz!!!"); break;
    }
    return 0;
    }
    */
    system("COLOR B"); // NOT: system("COLOR B "); cmd ekran�ndaki yaz�lar�n rengini de�i�tirir.
    int gun;
    printf("1'den 7'ye Kadar Bir Sayi Giriniz Ve Girdiginiz Sayinin Hangi Gune Karsilik Geldigini Gorunuz: ");
    scanf("%d",&gun);
    switch(gun)
    {
    case 1: printf("\nPazartesi Gunu: "); break;
    case 2: printf("\nSali Gunu: "); break;
    case 3: printf("\n�arsamba Gunu: "); break;
    case 4: printf("\nPersembe Gunu: "); break;
    case 5: printf("\nCuma Gunu: "); break;
    case 6: printf("\nCumartesi Gunu: "); break;
    case 7: printf("\nPazar Gunu: "); break;
    default: printf("\nBelirlenen Sayi Araliginde Degil Lutfen 1'den 7'ye Kadar Bir Sayi Giriniz :("); break;
    }
   getch();
   return 0;
    }
