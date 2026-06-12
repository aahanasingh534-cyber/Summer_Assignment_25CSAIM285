#include<stdio.h>
int perfectnumber(int n);
int main(){
    int num,result;
    printf("enter the value of number:");
    scanf("%d",&num);
    result=perfectnumber(num);
    if(result)
    printf("perfect number");
    else
    printf("not a perfect number");
    return 0;

}

int perfectnumber(int n){
int i,sum=0;

for(i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
    }
}

    if(sum==n)
    return 1;
    else 
    return 0;

}