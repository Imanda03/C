#include <stdio.h>
 
int main()
{
    int number[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter a number :\n");
        scanf("%d", &number[i]);
        if (number[i] % 2 == 0)
        {
            printf("%d is even.\n", number[i]);
        }
        else
        {
            printf("%d is odd.\n", number[i]);
        }
    }
 
    return 0;
}
