#include<stdio.h>
void main(){
	int x,y;
	printf("number:");
	scanf("%d",&x);
	for(y=1;y<=10;y++){
		printf("%d*%d=%d\n",x,y,x*y);
	}
}
