#include <stdio.h>

 //wap to check the number is prime or not 
 
int main()
{
    int i, n, prime;
    printf("Enter the number : \n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("it is not a prime number ");
    }
    else
    {
        printf("it is a prime number");
    }

    return 0;
}