#include<stdio.h>
void main()
{
    int a, b, i, num=0;
    printf("Enter number a:\n");
    scanf("%d", &a);
    printf("Enter number b:\n");
    scanf("%d", &b);
    for(i=1; i<=b; i++){
        num = num+a;
    }
    printf("%d", num);
}

