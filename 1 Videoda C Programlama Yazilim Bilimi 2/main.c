#include <stdio.h>
#include <stdlib.h>
//function example
//fonksiyonda mainde girdimiz sayiyi +1 artiran algoritma
/*
void test(int a) { //void de�eri herhangibi birsey d�n�lmedi�i anlamina geliyor.
    a = a + 1;
    printf("%d",a);
}
int main()
{
    test(10); // Function call , fonksiyon �a�r�s�
    getchar();
    getchar();
    return 0;
}
*/
//fonksiyonunu tanimlad��imiz bir toplami islemini tekrardan main i�inde kullanma.
/*
int addNumbers(int a, int b, int c) {
    int total = a + b + c;
    return total;
}
int main()
{
    int total = addNumbers(10,20,30);
    int lastTotal = addNumbers(total, total, total);
    printf("lastTotal : %d",lastTotal);
    getchar();
    getchar();


    return 0;
}
*/
//main icerisinde tanimladi�imiz diziyi fonksiyonda toplama islemini uygulama
/*
int addArray(int a[],int length) {
    int total = 0;
    int i;
    for (i=0;i<length;i++){
        total += a[i];
    }
    return total;
}
int main(){
    int dizi[] = {10,20,30,40,50};

    printf("%d",addArray(dizi,5));

    getchar();
    getchar();

    return 0;
}
*/
//Girilen karakterin uzunlu�unu strlength kullanmadan kendi fonksiyonumuzda belirti�imiz sekilde bulma.
/*
int myStrLen(char a[]) {
    int length = 0;
    int i=0;
    for (; a[i] != '\0';i++) {
        length++;
    }
    return length;
}
int main(){
    char name[] = "Mustafa";

    printf("Uzunluk %d",myStrLen(name));

    getchar();
    getchar();

    return 0;
}
*/
//pointer = ayni sekilde bir de�i�kendir, bir de�i�ken tipidir, ancak bu de�i�ken tipi ba�ka bir de�i�kenin
//bellekte adresini tutar, ve biz bu sayede pointer kullanarak c dilindeki refencelarimizi kullanabiliriz.
/*
int main(){
    //refence
    int i = 5;
    int *p = &i; // *p burda pointer olarak kullaniliyor ve i de�i�kenin de�erini pointer seklinde aliyor.
    printf("%u\n", p); //i de�ikenimizin bellek �zerindeki adresini bize ekrana yazar.
    //derefence = referans g�sterdi�imiz o kutuya eri�, *p de�erini al.
    printf("%d\n", *p); //derefence islemini burda uyguluyoruz.

    (*p)++; //burda refence aldi�imiz islemi +1 artiriyoruz ()parantez islemini unutmayiniz!!!
    printf("%d\n",*p); //en son islemdeki refence kutusunu ekrana yazdiriyoruz.

    getchar();
    getchar();

    return 0;
}
*/
//pointerlarin ve dizilerin ili�kisine bakalim...
/*
int main(){
    char name[] = "Ali";
    //char burda tek kelime tutabildi�ini unutmayiniz!!!
    char *p = name; //burda &name demek zorunda de�iliz sadece name seklinde kullanilir ve pointer aktarilir.
    printf("%c\n", *p); // ilk de�eri ba�lang��� g�sterir ve buda A dir.
    p++; //pointer +1 artiriliyor dikkat edelim * ve ()parantez kullanmiyoruz.
    printf("%c\n", *p); //l de�erini bize d�nd�r�r.
    printf("%c\n",*(p + 1)); // pointer +1 artirmanin ba�ka bir yolu.

    getchar();
    getchar();

    return 0;
}
*/
//pointeri *(p + 0) *(p + 1) *(p + 2) seklinde yazdirma
/*
int main(){
    char name[] = "Ali";
    char *p = name;
    //char pointerlarini bu sekilde +0 +1 +2 de�erini veripte ekrana yazdirabiliriz.
    printf("%c\n",*(p + 0));
    printf("%c\n",*(p + 1));
    printf("%c\n",*(p + 2));

    getchar();
    getchar();

    return 0;
}
*/
//pointeri p[0] p[1] p[2] seklinde yazdirma
/*
int main(){
    char name[] = "Ali";
    //name[1] = *(name+1) bu iki yazilim seklide ayni g�revleri yap�yor
    char *p = name;
    //char pointerlarini bu sekilde p[0] p[1] p[2] seklinde dizi yazdirdi�imiz sekildede yazabiliriz.
    printf("%c\n", p[0]);
    printf("%c\n", p[1]);
    printf("%c\n", p[2]);

    getchar();
    getchar();

    return 0;
}
*/
//Call By Value kullanimi
/*
void swap(int i, int j){
    // i = 5,j = 6
    int temp = i; // temp = 5
    i = j; // i = 6,j = 6
    j = temp; // j = 5
    printf("Degerler %d %d\n",i,j);
}
int main(){
    int a = 5;
    int b = 6;

    swap(a,b);
    printf("a: %d b: %d",a,b);

    getchar();
    getchar();

    return 0;
}
*/
//Call By Refence kullanimi
//burda pointleri kullandi�imizda de�erlerin de�isti�ini g�recez c�nk� biz pointer kullanirken fonksiyonda
//bellek adreslerini g�ndermis olucaz ve bu sayede kalici de�i�iklikler yapabiliyor olacaz.
void swap(int *i, int *j){
    // i = 5,j = 6
    int temp = *i; // temp = 5
    *i = *j; // i = 6,j = 6
    *j = temp; // j = 5
    printf("Degerler %d %d\n",*i,*j);
}
int main(){
    int a = 5;
    int b = 6;

    swap(&a,&b);
    printf("a: %d b: %d",a,b);

    getchar();
    getchar();

    return 0;
}
