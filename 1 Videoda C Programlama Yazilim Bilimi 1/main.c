#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int i = 10;
    short int si = 20;
    long int li = 30;
    double d = 3.14;
    float f = 2.12;
    char c = 'A';
    */
    // Format Belirleyici
    //printf("%d %d %d %f %f %c",i,si,li,d,f,c);
    //printf("%d byte \n", sizeof(int));
    //printf("%d byte \n", sizeof(char));
    //printf("%d byte \n", sizeof(double));
    //printf("%d byte \n", sizeof(float));
    //printf("%d byte \n", sizeof(short));

    //printf("%d \n", 10 + 4);
    //printf("%d \n", 10 - 4);
    //printf("%d \n", 10 * 4);
    //printf("%f \n", 10.0 / 4);
    //printf("%d \n", 10 % 4);

    //tür dönüsüm işlemleri
    // char -> short -> int -> float -> double
    //printf("%f", 10 + 4.2);
    //printf("%d", (int)4.2);

    //artirma ve azaltma durumlari
    /*
    int a = 10;
    int b = 20;
    int c = 30;
    */
    //a = a + 2;
    //a += 2;
    //a++;
    //a = a - 2;
    //a -= 2;
    //a--; // postfix
    //--a; // prefix
    //printf("%d",a--); //cevap 10
    //printf("%d",--a); //cevap 9

    //Ekrana yazdirma durumlari
    //int a,b,c;
    //scanf_s("%d %d %d", &a,&b,&c); //scanf_s yeni programlari scanf hata verebiliyormus, diye scanf_S kullanildi.

    //printf("%d %d %d",a,b,c);
    //printf("Total : %d %d %d", a+ b +c);

    //Karşılaştirma durumlari
    //printf("%d", 3 < 4); // 1 cikar o da true anlamina gelir
    //printf("%d", 3 == 4); // 0 cikar o da false anlamina gelir
    //printf("%d", 3 != 4); // 1 cikar
    //printf("%d", 3 <= 4); //1 cikar

    //Mantiksal Bağlaçlar
    //printf("%d", (3 < 4) && (4 == 4)); // && (ve) operatörüdür... iki kosulunda doğru olmasi halinde true değer dönderir
    //printf("%d", (3 < 4) || (5 == 4)); // || (veya) operatörüdür... iki kosulunda bir değerin doğru olmasi halinde true değer dönderir
    //printf("%d", ! (3 < 4)); // ! (not) true değerini false olarak cevirir. bu yüzden 0 değerini döndürür

    //Karsilaştirma operatörü
    //if else if else
    /*
    int age = 17;

    if (age < 18) {
        printf("yas 18'den kucuk");
    } else {
       printf("yas 18 veya buyuk");
    }
    */
    /*
    int process = 100;

    if (process == 1){
        printf("Process 1");
    }
    else if (process == 2) {
        printf("Process 2");
    }
    else if (process == 3) {
        printf("Process 3");
    }
    else {
        printf("Invalid");
    }
    */
    //switch case yapisi
    /*
    int process = 1;

    switch(process)
    {
        case 1:
            printf("Process 1");
            break;
        case 2:
            printf("Process 2");
            break;
        default:
            printf("Invalid");
            break;
    }
    */
    //döngü yapıları
    /*
    int i = 0;
    while (i < 10) {
        printf("i : %d\n",i);
        i += 2;
    }
    */
    /*
    int i;
    for (i = 0; i < 10;i++){
        printf("i : %d\n",i);
    }
    */
    //break ve continue komutlari
    /*
    int i = 0;
    while (1) {  // burda while hep döngünün dönmesini sağlar 1 değeri
        printf("i:%d\n",i);
        i++;
        if(i == 5) {
            printf("Donguden cikiliyor");
            break;
        }
    }
    */
    /*
    int i = 0;
    while (i < 10) {
        if(i == 2 || i == 5) {
            i++;
            continue;
        }
        printf("i:%d\n",i);
        i++;
    }
    */
    //Dizi örnekleri
    /*
    int dizi[] = {10,20,30,40};

    printf("%d", dizi[2]);
    */
    //Dizileri for ile hepsini ekrana yazdirma
    /*
    int dizi[] = {10,20,30,40};

    int i;

    for (i=0; i<4;i++){
        printf("Eleman : %d\n",dizi[i]);
    }
    */
    //4 değerli bir diziyi değerlerini bize yazdirma metodu
    /*
    int dizi[4];

    int i;
    for(i=0;i<4;i++){
        printf("Yeni Array Degeri: ");
        scanf_s("%d",&dizi[i]);
    }
    for (i=0; i<4;i++){
        printf("Eleman : %d\n",dizi[i]);
    }
    */
    //Dizilerde toplama işlemi
    /*
    int dizi[5];
    int toplam = 0;
    int i;
    for (i=0; i<5; i++){
        printf("Yeni Deger: ");
        scanf_s("%d",&dizi[i]);
    }
    for (i=0; i<5; i++){
        toplam += dizi[i];
    }
    printf("Total: %d ", toplam);
    */
    //Karakter Dizileri veya Stringler
    /*
    char name[] = "Ali";

    printf("%c %c", name[0],name[1]); //ekrana A ve l yazar...
    */
    /*
    char name[] = "Ali";

    printf("%s", name); //ekrana Ali yazar,cünkü burda c dili bütün karakterlere tek tek bakiyor /0 ve bitiş karakteri gördüğü zaman bizim işlemlerini sona erdiriyor.
    */
    /*
    char name[] = "Ali";

    printf("%d", strlen(name)); //kac kelime olduğunu ekrana yazar cevap 3'tür, <stdlib.h> kütüphanesi olmasi lazimdir.
    */


    getchar();
    getchar(); //programizin kapanmasin önlemek icin kullanilir...
    return 0;
}
