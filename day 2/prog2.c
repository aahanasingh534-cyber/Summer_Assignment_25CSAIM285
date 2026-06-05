#include<stdio.h>
int main(){
    int n,i,r,rev=0;

    //input any number
    printf("Enter a number: ");
    scanf("%d",&n);

    //loop for reverse of number
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse of number: %d",rev);
    return 0;
}