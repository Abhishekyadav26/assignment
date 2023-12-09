#include<stdio.h>
int min(int a ,int b){
    int c =0;
    if(a>b){c=c+b;}
    else{c=c+a;}
    return c;
}
int main(){
    int n , m;
    printf("enter the base number :");
    scanf("%d",&n);
    printf("enter the power number :");
    scanf("%d",&m);
    int minimum =min(n,m);
    printf("%d",&minimum);
    return 0;
}