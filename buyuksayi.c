#include <stdio.h>
#include <stdlib.h>


int main(){

    int a,b,c; //girilecek sayılar//
    printf("3 sayı giriniz");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);


if(a<=b){

		if(b<=c){

			printf("en büyük sayı %d \n",c);
		}else if(c<=b)

		{
			printf("en büyük sayı %d \n",b);
		}

	}
else if(b<=a){

			if(c<=a){

				printf("en büyük sayı %d \n",a);
			}else if(a<=c)

			{
				printf("en büyük sayı %d \n",c);
			}



	}




}