#include<stdio.h>
void main(){
	float math,physics,chemistry,english,computer,total,per;
	printf("math:");
	scanf("%f",&math);
	printf("\n physics:");
	scanf("%f",&physics);
	printf("\n chemistry:");
	scanf("%f",&chemistry);
    printf("\n english:");
	scanf("%f",&english);
	printf("\n computer:");
	scanf("%f",&computer);
	total=math+physics+chemistry+english+computer;
	per=total/500*100;
	printf("\n sum:%.2f",total);
	printf("\n percentage:%.2f",per);
}
