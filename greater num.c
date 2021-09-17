#include <stdio.h>
void main()
{
    int a,b,c,d,e, high;
    printf("enter 5 numbers seperated by ,:");
    scanf("%d,%d,%d,%d,%d", &a,&b,&c,&d,&e );
    high=(a>b)&&(a>c)&&(a>d)&&(a>e)?a:(b>c)&&(b>d)&&(b>e)?b:(c>d)&&(c>e)?c:(d>e)?d:e;
    printf("Highest is %d", high);
    
}
