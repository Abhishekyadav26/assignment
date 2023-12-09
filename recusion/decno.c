#include <stdio.h>
void drcressing(int n){
    if(n==0){return;}
    printf("%d\n",n);
    drcressing(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    drcressing(n);
    return 0;
}