#include<stdio.h>
int main(){
    int n;
    printf("number of students:");
    scanf("%d",&n);
    int m;
    printf("marks obtain:");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("marks:");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}