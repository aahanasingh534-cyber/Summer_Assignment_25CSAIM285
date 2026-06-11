#include<stdio.h>
int main(){
    int n,x,i,result=1;
    printf("Enter the value of x and n: ");
    scanf("%d%d",&x,&n);

    //calculating x^n without using the pow() function
    
    for(i=0;i<n;i++){
        result=result*x;
    }
    printf("The value of x^n is: %d",result);
    return 0;
}
