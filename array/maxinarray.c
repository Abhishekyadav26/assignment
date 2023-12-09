#include <stdio.h>
int main(){
    int n;
    printf("enter the no of element :");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for (int i=1;i<=n;i++){
        printf("enter the %d element :",i);
        scanf("%d",&arr[i]);
        if(sum<arr[i]){
           sum=arr[i];
        }
    }
    printf("the max value is %d",sum); 
    return 0;
}