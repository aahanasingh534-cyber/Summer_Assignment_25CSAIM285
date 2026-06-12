#include<stdio.h>
int fibonacci(int n);
int main(){
    int num,result;
    printf("enter the value of number:");
    scanf("%d",&num);
    result=fibonacci(num);
    printf("fibonacci number:%d",result);
    return 0;
}

int fibonacci(int n){
    int a=0,b=1,next;
    for(int i=0;i<n;i++){
        next=a+b;
        a=b;
        b=next;
    }
    return a;
}