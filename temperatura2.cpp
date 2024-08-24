#include<stdio.h>
#include <stdlib.h>


int main (void){
 	float c,f;
 	
 	printf("digite o valor em celcius\n");
 	scanf("%f",&c);
	fflush(stdin);

	f= c*9/5+32;
	
	printf("a temperatura %.2f em fahrenheint:",f);
	return 0;



}