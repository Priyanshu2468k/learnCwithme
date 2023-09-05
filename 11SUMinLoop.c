#include<stdio.h>

//wap to print sum of first 10 natural number using for loop

int main(){
    int i,sum=0;

    for(i=0;i<=10;i++){
        sum +=i;
    }
    printf("The sum is : %d",sum);
    return 0;
}