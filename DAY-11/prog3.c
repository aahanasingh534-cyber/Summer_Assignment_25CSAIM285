#include<stdio.h>
int prime(int n);
int main(){
int num,result;
printf("enter the value of num:");
scanf("prime:%d",&num);
if(prime(num))
printf("prime number");
else 
printf("not a prime nmuber");
return 0;
}

int prime(int n){
    
    if(n<=1)
    return 0;
    for(int i=2;i<n;i++){
if(n%i==0)
return 0;
else return 1;
}
    }
