#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of rows:\n");
    scanf("%d",&n);
    int m;
    printf("enter the no. of column:\n");
    scanf("%d",&m);
     for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=m;j++){
        char ch=(char)a;
        printf("%c ",ch);
        a++;
        }
        printf("\n");
    }
}