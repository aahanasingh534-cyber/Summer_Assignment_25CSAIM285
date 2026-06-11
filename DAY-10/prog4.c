#include<stdio.h>
int main(){
    int n,i,j;
    printf("input the no of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("%c",'A'+j);
        }
        for(j=0;j<i-1;j++){
          printf("%c",'A'+j);
        }
        
        printf("\n");

}
    return 0;
}