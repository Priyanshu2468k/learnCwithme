#include <stdio.h>

// wap to calculate simple interest
int main()
{
    int time;
    float principal, rate;
    printf("principal : ");
    scanf("%f", &principal);
    printf("rate : ");
    scanf("%f", &rate);
    printf("time : ");
    scanf("%d", &time);
    printf(" simple interest is %f", (principal * rate * time) / 100);

    return 0;
}