#include <stdio.h>
int main(){
    int n,sum=0,i=0;
    printf("enter the no of element :");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<=n-1;i++){
        printf("enter the %d element :",i+1);
        scanf("%d",&arr[i]);
        sum =sum + arr[i];
    }
    printf("the sum of array is %d \n",sum);
    return 0;
}