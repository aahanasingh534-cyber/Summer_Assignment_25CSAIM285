#include<stdio.h>
int main(){
    int n,i,s,a[10];
    printf("input the array size:");
    scanf("%d",&n);
    
    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("input the searching element:");
    scanf("%d",&s);

    
    for(i=0;i<n;i++){
        if(a[i]==s){
            printf("searching element is found at position:%d",i+1);
            break;
        }
    }

    return 0;
}