#include<stdio.h>
int main(){
    int m,n,i,j,flag=1;

    //input start and end range
    //start range is m and end range is n
    printf("input the value of m and n:");
    scanf("%d %d",&m,&n);

    for(i=m;i<=n;i++){
        if(i>1){
            flag=1;
        }
    
             for(j=2;j<i;j++){
                if(i%j==0){
                    flag=0;
                    break;
                }
            }

                    if(flag==1){
                        printf("%d\t",i);
                    }
                
        }
        return 0;
        }
