#include<stdio.h>
int main(){
    char arr[]={'!','@','%','$'};
    for(int i=0;i<4;i++){
    printf("%p ",&arr[i]);
    }
}
