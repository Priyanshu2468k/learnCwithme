#include <stdio.h>

// print numbers from 0 to 10 using while loop

int main()
{
    int a;
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}