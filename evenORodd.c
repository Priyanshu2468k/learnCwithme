#include<stdio.h>
//to find wheather the number is even or odd
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    if(a%2==0){
        printf("The number is even");

    }
    else{
        printf("The number is odd");
    }
    return 0;
}