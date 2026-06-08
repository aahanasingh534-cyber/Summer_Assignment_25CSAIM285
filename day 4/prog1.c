#include<stdio.h>
int main(){
    int a=0,b=1,next,n,i;
    printf("input the value of n:");
    scanf("%d",&n);

    //fibonacci series
    printf("fibonacci series:");

    for(i=0;i<n;i++){
        next=a+b;
        a=b;
        b=next;
        printf("%d\t",a);

    }
    return 0;
}