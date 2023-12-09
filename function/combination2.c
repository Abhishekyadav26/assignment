#include<stdio.h>
int combo(int a){
    int d = 1;
    for (int i=1;i<=a;i++){
        d=d*i;
    }
    return d ;
}
int main(){
    int n,r;
    printf("enter the n:");
    scanf("%d",&n);
    printf("enter the r:");
    scanf("%d",&r);
    int combination = combo(n)/(combo(r)*combo(n-r));
    printf("the result is : %d ",combination);
    return 0;
}