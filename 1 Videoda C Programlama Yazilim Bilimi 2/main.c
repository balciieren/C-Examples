#include <stdio.h>
#include <stdlib.h>
//function example
//fonksiyonda mainde girdimiz sayiyi +1 artiran algoritma
/*
void test(int a) { //void değeri herhangibi birsey dönülmediği anlamina geliyor.
    a = a + 1;
    printf("%d",a);
}
int main()
{
    test(10); // Function call , fonksiyon çağrısı
    getchar();
    getchar();
    return 0;
}
*/
//fonksiyonunu tanimladığimiz bir toplami islemini tekrardan main içinde kullanma.
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
//main icerisinde tanimladiğimiz diziyi fonksiyonda toplama islemini uygulama
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
//Girilen karakterin uzunluğunu strlength kullanmadan kendi fonksiyonumuzda belirtiğimiz sekilde bulma.
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
//pointer = ayni sekilde bir değişkendir, bir değişken tipidir, ancak bu değişken tipi başka bir değişkenin
//bellekte adresini tutar, ve biz bu sayede pointer kullanarak c dilindeki refencelarimizi kullanabiliriz.
/*
int main(){
    //refence
    int i = 5;
    int *p = &i; // *p burda pointer olarak kullaniliyor ve i değişkenin değerini pointer seklinde aliyor.
    printf("%u\n", p); //i değikenimizin bellek üzerindeki adresini bize ekrana yazar.
    //derefence = referans gösterdiğimiz o kutuya eriş, *p değerini al.
    printf("%d\n", *p); //derefence islemini burda uyguluyoruz.

    (*p)++; //burda refence aldiğimiz islemi +1 artiriyoruz ()parantez islemini unutmayiniz!!!
    printf("%d\n",*p); //en son islemdeki refence kutusunu ekrana yazdiriyoruz.

    getchar();
    getchar();

    return 0;
}
*/
//pointerlarin ve dizilerin ilişkisine bakalim...
/*
int main(){
    char name[] = "Ali";
    //char burda tek kelime tutabildiğini unutmayiniz!!!
    char *p = name; //burda &name demek zorunda değiliz sadece name seklinde kullanilir ve pointer aktarilir.
    printf("%c\n", *p); // ilk değeri başlangıçı gösterir ve buda A dir.
    p++; //pointer +1 artiriliyor dikkat edelim * ve ()parantez kullanmiyoruz.
    printf("%c\n", *p); //l değerini bize döndürür.
    printf("%c\n",*(p + 1)); // pointer +1 artirmanin başka bir yolu.

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
    //char pointerlarini bu sekilde +0 +1 +2 değerini veripte ekrana yazdirabiliriz.
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
    //name[1] = *(name+1) bu iki yazilim seklide ayni görevleri yapıyor
    char *p = name;
    //char pointerlarini bu sekilde p[0] p[1] p[2] seklinde dizi yazdirdiğimiz sekildede yazabiliriz.
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
//burda pointleri kullandiğimizda değerlerin değistiğini görecez cünkü biz pointer kullanirken fonksiyonda
//bellek adreslerini göndermis olucaz ve bu sayede kalici değişiklikler yapabiliyor olacaz.
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
