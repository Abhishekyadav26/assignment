#include<stdio.h>
int factorial(int a){
    int d = 1;
    for (int i=1;i<=a;i++){
        d=d*i;
    }
    return d ;
}
int combo(int n,int r){
    int combination = factorial(n)/(factorial(r)*factorial(n-r));
    return combination ;
}
int main(){
    int n,r;
    printf("enter the n:");
    scanf("%d",&n);
    int space=n;
    for (int i=0;i<=n;i++){
        for (int k=1;k<=space;k++){
            printf("  ");
        }
        space--;
        for (int j=0;j<=i;j++){
            int icr=combo(i,j);
            printf("%d ",icr);
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}