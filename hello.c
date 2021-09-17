#include<stdio.h>
void main(){
	int a,b;
	printf("Multiplication number of: ");
	scanf("%d",&a);
	for (b=1;b<=10;b++)
	{
		printf("%d*%d=%d\n",a,b,a*b);
	}
}
