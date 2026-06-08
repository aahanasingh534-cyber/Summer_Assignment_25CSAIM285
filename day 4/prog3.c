#include<stdio.h>
#include<math.h>
int main(){
    int n,num,r,t,count=0,sum=0,temp;
    printf("input the value of n:");
    scanf("%d",&n);

    temp=n;
    num=n;

    //armstrong number
    while(n!=0){
        n=n/10;
        count++;

    }
    while(num!=0){
        r=num%10;
        sum=sum+pow(r,count);
        num=num/10;
    }
    if(temp==sum){
        printf("%d is an armstrong number",temp);
    }
    else{
        printf("%d is not an armstrong number",temp);
    }
    return 0;
}