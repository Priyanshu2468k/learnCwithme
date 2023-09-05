#include <stdio.h>
//wap to print first n natural number using do while
int main()
{
    int i = 0;
    int n;
    printf("Enter the  value of n :\n");
    scanf("%d", &n);

    do
    {
        printf("the natural number is %d\n ", i+1);
        i++;
    } while (i < n);
    return 0;
}
