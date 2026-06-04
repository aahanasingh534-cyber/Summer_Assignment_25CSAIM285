#include<stdio.h>
int main(){
    int n,i,fact=1;

    //input the number
    printf("enter any number:");
    scanf("%d",&n);

    //loop for factorial of a number

    for(i=1;i<=n;i++){
        fact = fact * i;
    }

    printf("factorial of a number is:%d",fact);
    return 0;

    }