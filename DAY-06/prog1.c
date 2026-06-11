#include <stdio.h> 
int main(){
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    //decimal to binary conversion
    while(n>0){
        r=n%2;
        printf("%d",r);
        n=n/2;
    }
    return 0;
}