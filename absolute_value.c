#include<stdio.h>
int main(){
int x;
printf("enter the no.\n");
scanf("%d",&x);
if(x>0){
    x = x*1;
    printf("the absolute value of x is:%d",x);

    }
else if(x<0){
    x = x*(-1);
    printf("the absolute value of x:%d",x);
    
}
}        

    

    