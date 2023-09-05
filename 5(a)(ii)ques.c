#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number : \n");
    scanf("%d", &a);
    b = a % 2 == 0 ? printf("Even number") : printf("Odd number");
}