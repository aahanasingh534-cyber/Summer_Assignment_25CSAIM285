#include<stdio.h>
int main(){
    int n,i,r,product=1;

    //input any number
    printf("enter any number:");
    scanf("%d",&n);

    //loop for product of digits

    while(n>0){
        r=n%10;
        product=product*r;
        n=n/10;
    }

    printf("product of digits:%d",product);
    return 0;
}