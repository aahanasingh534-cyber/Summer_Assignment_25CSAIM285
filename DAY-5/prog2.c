#include<stdio.h>
int main(){
    int n,num,i,r,fact,sum=0;
    printf("input the value of n:");
    scanf("%d",&n);
    
    num=n;

    //logic for strong number

    while(num!=0){
        r=num%10;

        fact=1;
         
        for(i=1;i<=r;i++){
        fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }

    if(sum==n){
        printf("number is a strong number");
    }
    else{
        printf("number is not a strong number");
    }
    return 0;

}