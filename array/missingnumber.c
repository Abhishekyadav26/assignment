#include <stdio.h>
#include <stdbool.h>
int main(){
    int n,sumx=0;//wrong hai.
    printf("enter the number of elements present in array");
    scanf("%d",&n);
    int arr[n];
    int sumof100=0;
    for(int i=1;i<=n;i++){
        sumof100=sumof100+i;
    }
    for(int i=0;i<=n-1;i++){
        printf("enter %d elements of array :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        sumx=sumx+arr[i];
    }
    printf("the missing number is %d ",sumof100-sumx);
    return 0;
}