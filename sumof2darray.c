#include <stdio.h>
int main(){
    int arr1[2][2]={1,2,3,4};
    int sum= 0;
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum = sum + arr1[i][j];
        }
    }
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }    
    printf("the of 2d array is %d",sum);
    
    return 0;
}