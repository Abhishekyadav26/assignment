#include <stdio.h>
int main(){
    int count=0,n;
    printf("enter the no of element in array:");
    scanf("%d",&n);
    int arr[n];
    for(int j=0;j<=n-1;j++){
        printf("enter the %d element:",j);
        scanf("%d",&arr[j]);
    }
    int comparenum;
    printf("what element number you want to compare:");
    scanf("%d",&comparenum);
    int m = arr[comparenum];
    printf("%d",m);
    for(int j=0;j<=n-1;j++){
        if(arr[j]>m){
            count++;
        }
    }
    printf("the no of element which are greater than %d is %d",m,count);
    return 0;
}