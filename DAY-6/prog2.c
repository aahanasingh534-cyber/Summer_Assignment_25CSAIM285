#include<stdio.h>
int main(){
    int bin,r,dec=0,power=1;
    printf("Enter the binary number: ");
    scanf("%d",&bin);

    //binary to decimal conversion
    while(bin>0){
        r=bin%10;
        dec=dec+r*power;
        power=power*2;
        bin=bin/10;
    }
    printf("The decimal equivalent is: %d",dec);
    return 0;
}

   
