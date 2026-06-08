#include<stdio.h>
int main(){
    int n,i;
    printf("input the value of n:");
    scanf("%d",&n);

    //logic for perfect number

    for(i=1;i<n-1;i++){
       if(n%i==0){
        printf("%d ",i);
       }
    }

     return 0;
}