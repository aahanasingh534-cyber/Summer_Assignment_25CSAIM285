#include<stdio.h>
int main(){
    int a[10],n,i,sum=0,avg;
    printf("input the array size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    
    }
    for(i=0;i<n;i++){
        printf("array elements are:%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("sum of elements are:%d\n",sum);

    for(i=0;i<n;i++){
        avg=sum/n;
    }
    printf("average of elements are :%d\n",avg);

    return 0;
}