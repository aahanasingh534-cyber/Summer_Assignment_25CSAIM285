#include<stdio.h>
int main(){
    int n,r,i,sum=0;
    printf("enter any number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    printf("sum of n natural numbers are:%d",sum);

    return 0;

}