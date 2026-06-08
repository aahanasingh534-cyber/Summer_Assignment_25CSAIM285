#include<stdio.h>
int sumofdigits(int n);
int main(){
    int num,r;
    printf("enter a number:");
    scanf("%d",&num);

    //sum of digits using recursion
    r=sumofdigits(num);
    printf("sum of digits of a number is:%d",r);
    return 0;
}

int sumofdigits(int n){
    if(n==0){    //base case
        return 0;
    }
    else{
        return (n%10) + sumofdigits(n/10);
    }
}