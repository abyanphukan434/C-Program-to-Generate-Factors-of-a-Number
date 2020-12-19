#include <stdio.h>
int main()
{
  int n, factor = 1, i;
  printf("Enter the number");
  scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        factor = factor * i;
    }
    
    printf("Factorial of the given number is = %d",factor);
    return 0;
}
