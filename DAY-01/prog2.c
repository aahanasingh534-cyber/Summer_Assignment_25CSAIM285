#include<stdio.h>
int main(){
    int n,i,result=0;

    //input the number
    printf("enter any number:");
    scanf("%d",&n);

    printf("multiplication table of a number is:\n");

    for(i=1;i<=10;i++){
        result = n*i ;
        
        printf("%d x %d = %d\n",n,i,result);
    }
        return 0;


}