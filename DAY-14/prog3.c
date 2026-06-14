#include<stdio.h>
int main(){
    int n,i,largest,seclargest,a[10];
    printf("input the array size:");
    scanf("%d",&n);

    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    largest=a[0];
    seclargest=a[0];
    
    for(i=0;i<n;i++){
        if(a[i]>largest){
            seclargest=largest;
            largest=a[i];
        }
        else if(a[i]>seclargest && a[i]!=largest){
            seclargest=a[i];
        }
        }
        printf("secondlargest number is:%d",seclargest);
        return 0;
    }
