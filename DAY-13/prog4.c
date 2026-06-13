#include<stdio.h>
int main(){
    int a[10],n,i,evencount=0,oddcount=0;
    printf("input the array size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
        evencount++;
        }
        else{
            oddcount++;
        }
       
    }
    printf("no of even elements:%d\n",evencount);
    printf("no of odd elements:%d\n",oddcount);
    return 0;
}