#include<stdio.h>
#include<math.h>
#define pi 3.14
//wap to find area of circle
int main(){
float a,b;
printf("Enter value of radius : ");
scanf("%f",&a);
b=pi*pow(a,2);
printf("Area is : %f",b);
    return 0;
}