#include<stdio.h>
int main(){
    int a,b;

    //input any two numbers
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    //GCD of two numbers
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    printf("The GCD is: %d", a);
    return 0;
}