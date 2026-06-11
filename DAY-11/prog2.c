#include<stdio.h>
int maximum(int a,int b);
int main(){
    int num1,num2,result;
    printf("enter the value of num1 and num2:");
    scanf("%d%d",&num1,&num2);
    result=maximum(num1,num2);
    printf("maximum value:%d",result);
    return 0;
}

int maximum(int a,int b){
    if(a>b)
    return a;
    else 
    return b;
}