#include<stdio.h>
int main(){
    int n,i,flag=1;

    //input any number
    printf("Enter any number: ");
    scanf("%d",&n);

    // check if the number is prime or not

    if(n<=1){
        flag=0;
    }
    else{
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }

}

    if(flag==1){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
    return 0;
}
    