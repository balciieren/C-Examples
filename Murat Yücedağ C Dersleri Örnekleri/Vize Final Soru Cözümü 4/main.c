#include <stdio.h>
#include <stdlib.h>

//Bir havayolu sirketi yolcularý için bagaj sinirlamasi uygulamaktadýr.
//Her yolcunun el için 8 normal için 15 kg bagaj hakký bulunmakta. Eðer yolcular
//el haklariný geçerse kg basina 4 TL,normal haklarini geçerse kg baþýna 5 TL ödeme
//yapmak durumundadir. Buna göre klavyeden el ve normal bagajlarinin kg olarak aðýrlýðýný
//giren yolcunun ödemesi gereken bagaj ücreti ne kadardýr, c dili ile hesaplayýn?
//*el ve normal haklarini minumum deðerlerinin altýnda girilirse ödeme tutari negatif 0
//kabul edilecek
/*
int main()
{
    int normal,el,normaltutar,eltutar,toplam;
    printf("El Bagaj Kg: ");
    scanf("%d",&el);

    printf("Normal Bagaj Kg: ");
    scanf("%d",&normal);

    if(normal<15)
    {
        normaltutar=0;
    }
    else
    {
        normaltutar=(normal-15)*5;
    }
    if(el<8)
    {
        eltutar=0;
    }
    else
    {
        eltutar=(el-8)*4;
    }
    toplam=normaltutar+eltutar;

    printf("Toplam Ekstra Odemeniz: %d iyi yolculuklar...",toplam);
    return 0;
}
*/
//Klavyeden birbirinden farkli 2 sayi girilmesi sağlayan ve bu iki sayi arasindaki (bu iki sayi dahil)
//tamsayilarin toplamini ekrana yazdiran c ile hazirlayin.
/*
int main()
{
    int sayi1,sayi2,buyuk,kucuk,i,toplam=0;

    yeniden:
    printf("1.Sayi: ");
    scanf("%d",&sayi1);

    printf("2.Sayi: ");
    scanf("%d",&sayi2);

    if(sayi1==sayi2)
    {
        goto yeniden;
    }
    else
    {
        if(sayi1>sayi2)
        {
            buyuk=sayi1;
            kucuk=sayi2;
        }
        else
        {
            kucuk=sayi1;
            buyuk=sayi2;
        }
    }
    for(i=kucuk;i<=buyuk;i++)
    {
        toplam=toplam+i;
    }
    printf("Toplam: %d",toplam);
    return 0;
}
*/
//Heybeliada'da bulunan yazilim evi otelinde kış mevsimimden 329 kişi kalmıştır. İlkbahar da kış
//mevsiminin dörtte biri, yaz mevsiminde ilkbaharın 8 katı ve sonbaharda yaz mevsiminde 10 da biri
//kadar kişi kaldığında göre bu otelde 1 yıl içinde toplam kaç kişi kalmıştır,c dili ile hesaplayın.
/*
int main()
{
    int yaz,kis,ilkbahar,sonbahar,toplam;
    kis=320;
    ilkbahar=kis/4;  //80
    yaz=ilkbahar*8; //640
    sonbahar=yaz/10; //64

    toplam=kis+ilkbahar+sonbahar+yaz;
    printf("Toplam: %d",toplam);
    return 0;
}
*/
//klavyeden girilen 3 basamaklı bir sayinin rakamları toplamını bulan c dilinde kodlayin.
int main()
{
    int birler,onlar,yuzler,toplam,sayi;

    printf("Sayi: ");
    scanf("%d",&sayi);

    birler=sayi%10;
    yuzler=sayi/100;
    onlar=(sayi/10)%10;

    toplam=yuzler+onlar+birler;
    printf("Toplam: %d",toplam);
    return 0;
}
