#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of elements in array1:");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<=n-1;i++){
        printf("enter the %d elements in array1:",i+1);
        scanf("%d",&arr1[i]);
    }
    int m;
    printf("enter the no. of elements in array2:");
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<=m-1;i++){
        printf("enter the %d elements in array2:",i+1);
        scanf("%d",&arr2[i]);
    }
    int te = n + m;
    int sum[te];
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i];
    }
    for (int i = n; i < te; i++) {
        sum[i] = arr2[i - n];
    }

    printf("The merged array is: ");
    for (int i = 0; i < te; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
    return 0;
}    