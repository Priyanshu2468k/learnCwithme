#include <stdio.h>

int main()
{

    for (int i = 0, a = 5; i < 10; i++)
    {
        if (i != a)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
        }

    return 0;
}