#include <stdio.h>
#include <stdlib.h>

int topla(int x1,int x2){
	return(x1+x2);
}
int main(){
	int x1,x2;
	printf("x1 ve x2 sayisini giriniz:");
	scanf("%d %d",&x1,&x2);
	printf("Toplam: %d",topla(x1,x2));
	return 0;
}
