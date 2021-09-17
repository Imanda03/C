#include<stdio.h>
void main()
{
	int i=0,num;
	printf("Enter the number");
	scanf("%d",&num);
	do{
		num=num/10;
		i=i+1;
	}
	while(num!=0);
	printf("digit count: %d",i);
}
