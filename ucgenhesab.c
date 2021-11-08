

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("** üçgen tipi belirleyici**\n üçgenin kenarlarını giriniz");
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);


	if(a==b && a==c){printf("eşkenar üçgen");}
	else if(a==b||a==c||c==b){printf("ikizkenar üçgen");}
	else printf("çeşitkenar üçgen");

	return 0;
}
