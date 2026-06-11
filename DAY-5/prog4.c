#include<stdio.h>
int main(){
    long long int n,i,largest=1;
    printf("input the value of n:");
    scanf("%lld",&n);

    //logic for largest prime factor

    for(i=2;i<=n;i++){
        while(n%i==0){
            largest=i;
            n=n/i;
        }
    }
    printf("largest prime factor is %lld",largest);
     return 0;
}