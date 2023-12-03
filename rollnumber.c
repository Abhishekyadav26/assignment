#include <stdio.h>
int main(){
    int arr[4][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            printf("enter:");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");   
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            printf("%d ",arr[i][j]);
        }
    }
    return 0;
}