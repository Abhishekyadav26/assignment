#include <stdio.h>
int main(){
    int evensum=0,oddsum=0,diff=0,n;
    printf("enter the no of element in array:");
    scanf("%d",&n);
    int arr[n];
    for(int j=0;j<=n-1;j++){
        printf("enter the %d element:",j+1);
        scanf("%d",&arr[j]);
    }
    for (int i=0;i<=4;i++){
        if(arr[i]%2==0){
            evensum=evensum+arr[i];
        }
        else{
            oddsum+=arr[i];
        }
    }
    diff =oddsum-evensum;
    printf("the sum of diff of even and odd number %d",diff);
    return 0;
}