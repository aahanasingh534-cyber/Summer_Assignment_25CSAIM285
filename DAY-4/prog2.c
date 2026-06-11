#include<stdio.h>
int main(){
    int a=0,b=1,next,n,i;
    printf("input the value of n:");
    scanf("%d",&n);

    //nth fibonacci term

    if(n==1){
        printf("nth term of fibonacci series is: %d",a);
    }
    else if(n==2){
        printf("nth term of fibonacci series is: %d",b);  
    }
    else{
    for(i=3;i<=n;i++){
        next=a+b;
        a=b;
        b=next;
    }
        printf("nth term of fibonacci series is: %d",b);
    }
    
    return 0;
}