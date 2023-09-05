#include<stdio.h>

int main(){
    int a;
    printf("Enter the number : \n");
    scanf("%d",&a);

    if(a==0){
     printf("Neither positive nor negative");
    }
    else if(a<0){
        printf("Negative");

    }
    else if (a>0){
        printf("Positive");
    }
    
    return 0;
}