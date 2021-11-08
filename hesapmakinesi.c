#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("**hesap makinesi** \n 2 sayı giriniz \n toplama=1 çıkarma=2 çarpma=3 bölme=4");

	double a,b;
	int c;

	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&c);

	switch( c){

		case 1:
			printf("%lf",a+b);
			break;
		case 2:
			printf("%lf",a-b);
			break;
		case 3:
			printf("%lf",a*b);
			break;
		case 4:
			printf("%lf",a/b);
			break;



			}



	}

