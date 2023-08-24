#include<stdio.h>

//wap to calculate gross salary of a person grossalary=basic+da+ta da is 10% of basic and ta is 12% of basic
// question no.11 in assignment 1

int main(){
    float basic;
    printf("Enter basic salary");
    scanf("%f",&basic);
    printf("Gross salary is %f", basic+basic/10+basic*12/100);
    
    return 0;
}