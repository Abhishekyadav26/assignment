#include <stdio.h>
int main(){
    int n;
    printf("enter the no of lines:");
    scanf("%d",&n);
    int nsp=0;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=i;j<=n;j++){
            printf("%d ",j);
        }
        nsp++;
        printf("\n");
    }
    return 0;
}