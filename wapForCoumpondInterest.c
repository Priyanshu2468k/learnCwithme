#include <stdio.h>
#include <math.h>
//wap to find compond interest
int main()
{

    float principal, rate,time;
    
    printf("Enter principal\n");
    scanf("%f", &principal);
    printf("Enter rate percentage\n");
    scanf("%f", &rate);
    printf("Enter time\n");
    scanf("%f", &time);
    printf("Compound interest is %f\n",principal*pow(1+rate/100,time));
    return 0;
}
