#include<stdio.h>

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a%5 == 0 && a%8 ==0){
        printf("The number is divisible by 5 and 8");
    }
    else if (a%5==0){
        printf("The number is divisible by 5");
    }
    else if (a%8==0){
        printf("The number is divisible by 8");
    }
    return 0;
}