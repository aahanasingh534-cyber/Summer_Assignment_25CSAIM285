#include<stdio.h>
int palindrome(int n);
int main(){
    int num,result;
    printf("enter any number:");
    scanf("%d",&num);
    result=palindrome(num);
    if(result)
    printf("palindrome number");
    else
    printf("not a palindrome number");
    return 0;

}

int palindrome(int n){
    int r,t,rev=0;
    t=n;
    while(n!=0){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    
    if(t==rev)
        return 1;
    
    else
        return 0;
    
}