#include<stdio.h>
void main()
{
	int num,i,count=0;
	printf("Enter the number for press ");
	scanf("%d",&num);
	
	for(i=2;i<=num;i++)
	{
		if(num%i==0){
			count++;
		}
	}
	if(count==1){
		printf("%d is prime number",&num);
	}
	else
	printf("%d is not a prime number",&num);
}
