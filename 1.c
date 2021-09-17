#include<stdio.h>
void main(){
	float celcius;
	printf("Enter the temperature in celcius");
	scanf("%2f",&celcius);
	printf("The temperature in farenhiet is: %.2f",celcius*9/5+32);
}
