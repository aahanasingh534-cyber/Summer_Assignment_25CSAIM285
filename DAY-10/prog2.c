#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("input the no of rows:");
    scanf("%d",&n);

    for(i=5;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        
        for(k=(2*i-1);k>=1;k--){
           printf("*");
        }
    
        printf("\n");

}
    return 0;
}