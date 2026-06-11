#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("input the value of n:");
    scanf("%d",&n);

    //logic for perfect number

    for(i=1;i<n-1;i++){
       if(n%i==0){
        sum=sum+i;
       }
    }

    if(sum==n){
        printf("it is a perfect number");
    }
    else{
        printf("it is not a perfect number");
    }
    return 0;
}