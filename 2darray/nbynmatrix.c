#include <stdio.h>
int main(){
    int n;
    int a[2][2]={{1,0},{1,0}};
    int b[2][2]={{1,0},{1,0}};
    int cr =2;
    int resarr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            resarr[i][j]=0;
            for(int k=0;k<cr;k++){
                resarr[i][j]=resarr[i][j]+(a[i][k]*b[k][j]); 
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",resarr[i][j]);
        }
        printf("\n");
    }   
    return 0;
}