#include<stdio.h>
#include<math.h>
int main(){
    int m,n,num,r,temp;
    printf("input the value of m and n :");
    scanf("%d%d",&m,&n);

    //armstrong number in a range

    for(num=m;num<=n;num++){
        temp=num;
        int count=0;
        int sum=0;
        while(temp!=0){
            temp=temp/10;
            count++;
        }
        temp=num;
        while(temp!=0){
            r=temp%10;
            sum=sum+pow(r,count);
            temp=temp/10;
        }
        if(num==sum){
            
            //printf(" armstrong number are:");
            printf(" %d\t",num);
        }

    }
    return 0;
}
    
            