#include<stdio.h>
int main(){
    int n,count=0;

    //input the number
    printf("enter any number:");
    scanf("%d",&n);


    //loop for count of digits in a number

    while(n!=0){

        n=n/10;
        count++;
    }

    printf("count of digits in a number is:%d",count);
    return 0;
}