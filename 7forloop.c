#include <stdio.h>

// wap to print first n natural numbers in reverse order using for loop

int main()
{
    int n;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("The natural number is : %d\n", i);
    }

    return 0;
}