#include<stdio.h>
int factorial(int n);
int main(){
    int num,r,fact=1;
    printf("Enter a number: ");
    scanf("%d",&num);

    //factorial using recursion
    r=factorial(num);
    printf("factorial of a number is:%d",r);
    return 0;
}

    int factorial(int n){
        if(n==0 || n==1){    //base case
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }


