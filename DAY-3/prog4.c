#include<stdio.h>
int main(){
    int a,b,lcm,x,y;

    //input any two numbers
    printf("input the value of a and b:");
    scanf("%d %d",&a,&b);

    x=a;
    y=b;

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
        }
        int gcd=a;
        //lcm of two numbers

        lcm=(x*y)/gcd;
        printf("The LCM is: %d", lcm);
    
    return 0;
    }