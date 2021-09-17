#include<stdio.h>
void main(){
	int a,b,choice,add,sub,mul,div;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("choose the operator :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 'add':
			add=a+b;
			printf("The sum: %d\n",add);
			break;
		
		case  'sub':
			sub=a-b;
			printf("The sub: %d\n",sub);
			break;
		
		case  'mul':
			mul=a*b;
			printf("the mul: %d\n",mul);
			break;
		
		case  'div':
			div=a/b;
			printf("The div: %d",div);
			break;
		
		default:
			printf("wrong choice");
	}
}
