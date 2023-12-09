#include<stdio.h>
int factorial(int x,int n){
    if(x>n) return 0;
    printf("%d\n",x);
    return factorial(x+1,n);
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a=factorial(1,n);
    return 0;
}