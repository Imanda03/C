#include<stdio.h>
void main(){
	float a,b,c,d,total,per;
	char grade;
	printf("Enter the marks of four subject\n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	total=a+b+c+d;
	per=total/4;
	if(per>90)
	grade='A';
	else if(per>80)
	grade='B';
	else if(per>70)
	grade='C';
	else if(per>60)
	grade='D';
	else
	grade='E';
	printf("grade: %c",grade);
	}
