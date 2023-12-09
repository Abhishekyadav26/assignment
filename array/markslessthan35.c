#include <stdio.h>
int main(){
    int n,m;
    printf("enter the no of student :");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n-1;i++){
        printf("enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++){
        if(arr[j]<35){
            printf("%d ",j);
        }
    }

    return 0;
}