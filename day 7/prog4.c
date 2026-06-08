#include<stdio.h>
int reverse(int n);
int main(){
    int num,r;
    printf("enter a number:");
    scanf("%d",&num);

    //reverse of a number using recursion
    r=reverse(num);
    printf("reverse of a number is:%d",r);
    return 0;
}

int rev=0;
int reverse(int n){
    
    if(n==0){          //base case
        return rev;
    }

    rev = rev * 10 + (n%10);
        return reverse(n/10);
    }
    
