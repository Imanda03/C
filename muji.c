#include<stdio.h>
void main() 
{
	int i,count=0,count1=0;
	for(i=1;i<6;i++)
	{ 
	printf("please enter any five numbers you can imagine:");
	scanf("%d",&i);
	
		if(i%2==0)
		{
			printf("%d is even number\n ",i);
			count++;
		}
		else 
		{
			printf("%d is odd\n",i);
			count1++;
		}
		return 0;
	}
	printf("even = %d\n ",count);
	printf("odd = %d\n ",count1);
}
