#include<stdio.h>
#include<math.h>
int armstrong(int n);
int main(){
    int num,result;
    printf("enter the value of number:");
    scanf("%d",&num);
    result=armstrong(num);
    if(result){
        printf("armstrong number");
    }
    else{
        printf("not armstrong number");
    }
    return 0;
}

int armstrong(int n){
    int number,r,count=0,temp,sum=0;
    number=n;
    temp=n;
    while(number!=0){
        number=number/10;
        count++;
    }
    while(n!=0){
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;

    }
    if(sum==temp)
        return 1;
    else
        return 0;
    
}