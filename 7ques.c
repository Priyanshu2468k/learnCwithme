#include<stdio.h>

int main(){
    int a;
    printf("No. of days the member is late : ");
    scanf("%d",&a);

    if(a>=1 && a<=5){
        printf("Your FINE is 50 paise");

    }
    else if(a>=6 && a<=10){
        printf("Your FINE is 1 rupee");

    }
    else if(a>=10 && a<=30){
        printf("Your FINE is 5 rupees");

    }
    else if (a>30){
        printf("Sorry your membership is cancelled");
    }
    return 0;
}