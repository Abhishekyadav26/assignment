#include<stdio.h>
#include<math.h>
int main(){
    int n , m;
    printf("enter the base number :");
    scanf("%d",&n);
    printf("enter the power number :");
    scanf("%d",&m);
    int sq = pow(n,m);
    printf("the result is : %d",sq);
    return 0;
}