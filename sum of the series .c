#include <stdio.h>
int main()
{
  int i, n, sum = 0;
  printf("Terms you want sum of:\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    sum += i;
  }
  printf("The sum upto %d terms is %d.", n, sum);
  return 0;
}
