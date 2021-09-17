#include<stdio.h>
void main()
{
	int first_num,second_num,sum,diff;
	printf("first_number:");
	scanf("%d",&first_num);
	printf("\n second_num:");
	scanf("%d",&second_num);
	first_num>second_num?
	printf("\n the answer is %d", first_num+second_num):printf("the diff is %d",first_num-second_num);
}
