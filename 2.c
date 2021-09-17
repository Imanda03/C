#include<stdio.h>
void main(){
	float radius;
	float pi=3.1416;
	printf("radius is ");
	scanf("%f",&radius);
	printf("\n Area: %.2f",pi*radius*radius);
	printf("\n perimeter: %.2f",2*pi*radius);
}
