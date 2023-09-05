#include <stdio.h>

// wap to find out table of any number

int main()
{
    int n;
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }

    return 0;
}
