#include<stdio.h>
int main(){
    int n,p;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the power:");
    scanf("%d",&p);
    int result=1;
    for(int i=1;i<=p;i++){
        result=result*n;
    }
    printf("%d",result);
    return 0;
}