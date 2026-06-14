#include<stdio.h>
int main(){
    int n,i,key,a[10],count=0;
    printf("input the array size:");
    scanf("%d",&n);

    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    
    }
    printf("input element whose frequency is to be found:");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    printf("frequency of an element :%d",count);
    return 0;
}