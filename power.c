#include <stdio.h>
int power (int a,int b){
    if(b==1){return a;}
    int res = power(a,b/2) * power(a,b/2);
    return res ;
}
int main(){
    int n,m;
    printf("enter the base:");
    scanf("%d",&n);
    printf("enter the power:");
    scanf("%d",&m);    
    int res=power(n,m);
    printf("%d",res);
    return 0;
}