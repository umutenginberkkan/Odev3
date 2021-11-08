#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	printf("işlevin katsayılarını giriniz");
	double a,b,c,disk,d;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	disk = b*b-4*a*c;
	d=sqrt(disk);

	if(disk>=0){
		printf("%lf",(b-d)/2*a);
		printf("\n \n");

		printf("%lf",(b+d)/2*a);
	}
	else{disk *=-1;
	printf(" (%lf + %lf i) / %lf ",b,sqrt(disk),2*a);



	}



	return 0;
}