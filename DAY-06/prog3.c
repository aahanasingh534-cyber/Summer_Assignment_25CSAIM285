#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    //counting the set bits in the binary representation of n
    while(n>0){
        if(n%2==1){
            count++;
        }
        n=n/2;
    }
    printf("The number of set bits is: %d",count);
    return 0;
}
