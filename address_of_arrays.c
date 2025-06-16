#include<stdio.h>
int main(){
   int n;
   printf("enter the size of array:\n");
   scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("%p\n",&a[i]);
    }
}
    