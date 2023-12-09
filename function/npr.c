#include<stdio.h>
int factorial(int a){
    int d = 1;
    for (int i=1;i<=a;i++){
        d=d*i;
    }
    return d ;
}
int combo(int n,int r){
    int combination = factorial(n)/(factorial(n-r));
    return combination ;
}
int main(){
    int n,r;
    printf("enter the n:");
    scanf("%d",&n);
    printf("enter the n:");
    scanf("%d",&r);
    printf("the npr of rhe %d",combo(n,r));
    return 0;
}