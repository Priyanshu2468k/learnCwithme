#include<stdio.h>

int main(){
    int a;
    printf("Enter the number : \n");
    scanf("%d",&a);

    if(a % 2==0){
     printf("It is even");
    }
    else {
        printf("It is odd");
    }
    return 0;
}