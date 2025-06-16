#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("enter the age of ram:\n");
    scanf("%d",&ram);
    printf("enter the age of shyam:\n");
    scanf("%d",&shyam);
    printf("enter the age of ajay:\n");
    scanf("%d",&ajay);
    if(ram<shyam && ram<ajay){
        printf("the youngest is ram:%d",ram);
    }
    else if(shyam<ram && shyam<ajay){
        printf("the youngest is shyam:%d",shyam);
    }
    else if(ajay<ram && ajay<shyam){
        printf("the youngest is ajay:%d",ajay);
    }
}