#include <stdio.h>

//wap to print factorial of a number n

int main()
{
    int i, n, fac = 1;
    printf("Enter the number : \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fac *= i;
    }
    printf("Factorial is %d is : %d\n", n, fac);
    return 0;
}