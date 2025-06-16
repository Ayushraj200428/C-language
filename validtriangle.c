#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first side of triangle:");
    scanf("%d",&a);
    printf("enter the second side of triangle:");
    scanf("%d",&b);
    printf("enter the third side of triangle:3");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }
}
   
