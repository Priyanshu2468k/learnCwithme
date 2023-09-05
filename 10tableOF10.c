#include <stdio.h>

//wap to print table of 10 in reverse order

int main()
{
    printf("******MULTIPLICATION TABLE OF 10*******\n");

    for (int i = 10; i; i--)
    {
        printf(" 10 x %d = %d\n", i, 10 * i);
    }
    return 0;
}