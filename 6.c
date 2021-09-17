#include<stdio.h>
void main()
{
	float principle,rate,time,s_interest;
	printf("principle:");
	scanf("%f",&principle);
	printf("rate:");
	scanf("%f",&rate);
	printf("time:");
	scanf("%f",&time);
	
	printf("simple interest:%.2f",(principle*rate*time)/100);
}
