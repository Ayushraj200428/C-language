#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(int i=4;i<=3*n+1;i=i+3){
        printf("%d ",i);
    }
}