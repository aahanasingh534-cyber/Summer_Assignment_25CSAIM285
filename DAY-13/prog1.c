#include<stdio.h>
int main(){
    int a[10],n,i;
    printf("input the array size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    
    }
    for(i=0;i<n;i++){
        printf("array elements:%d\n",a[i]);
    }
    return 0;
}