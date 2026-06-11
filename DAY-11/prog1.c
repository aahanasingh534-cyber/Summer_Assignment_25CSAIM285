#include<stdio.h>
int sum(int a,int b);
int main(){
    int num1,num2,result;
    printf("enter the value of num1 and num2:");
    scanf("%d%d",&num1,&num2);
    result=sum(num1,num2);
    printf("sum of two number:%d",result);
    return 0;

}     //sum of two numbers using function

int sum(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}