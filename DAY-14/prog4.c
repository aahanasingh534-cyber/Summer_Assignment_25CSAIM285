#include<stdio.h>
int main(){
    int n,i,j,a[10];
    printf("input the array size:");
    scanf("%d",&n);

    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("duplicate elements are:\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
                break;
            }

        }
    }
    return 0;

}