#include<stdio.h>
int main(){
    int n,i,sum=0;

    //input the number
    printf("enter any number:");
    scanf("%d",&n);

    //loop for sum of n natural numbers
    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("sum of %d natural numbers are:%d",n,sum);

    return 0;

}