#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	a=b;
	b=temp;
	temp=a;
	printf("a: %d and b:%d",a,b);
}
