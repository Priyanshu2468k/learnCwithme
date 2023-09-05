#include <stdio.h>
#include <math.h>
int main()
{
    int n, a, b = 0, sum = 0, c;
    printf("Enter the number\n");
    scanf("%d", &n);
    a = n;
    while (a != 0)
    { 
        b = b + 1;
        a = a / 10;
    }    // ye loop b me no. of digit store krne ke liye hai
    a = n;
    while (a != 0)
    {
        c = a % 10; // ye digit nikalne ke liye hai
        sum = sum + pow(c, b);
        a = a / 10; // ye toh hai jitne no.of digit hoga
                    //utni baar loop repeat hoga
    }
    if (sum == n)
        printf("Armstrong number\n");
    else
        printf("not an Armstrong number\n");
    return 0;
}