#include<stdio.h>
int main(){
    int n,i,r,rev=0,temp;

    //input any number
    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;

    //loop for palindrome of number

    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }

    //check palindrome number
    if(temp==rev){
        printf("palindrom number");
    }
        else{
            printf("not a palindrome number");
        }
    return 0;
}