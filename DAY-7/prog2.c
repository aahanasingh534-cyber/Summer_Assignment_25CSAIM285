#include<stdio.h>
int fibonacci(int n);
int main(){
    int num,r;
    printf("enter a number:");
    scanf("%d",&num);

    //fibonacci using recursion
    r=fibonacci(num);
    printf("fibonacci of a number is:%d",r);
    return 0;

}

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}