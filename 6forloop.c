#include<stdio.h>

//wap to print first n natural numbers using for loop


int main(){
    int n;
    printf("Enter the value of n : \n");
    scanf("%d",&n);

    for(int i=0; i<n ; i++){
        printf("The natural number is : %d\n",i+1);
    }
    return 0;
}