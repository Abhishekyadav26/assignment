#include<stdio.h>
int main(){
    int n, m;
    printf("enter number of rows you want to print:");
    scanf("%d",&n);
    printf("enter number of column you want to print:");
    scanf("%d",&m);
    int nst=1;
    int nst1=2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i==n || j==m) || (i==nst  || j==nst)){
                printf("* ");
                nst++;
            }
            else if (i==nst1 || j==1){
                printf("* ");
                nst++;
            }    
            else if (i==1 && j==1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }printf("\n");
    }
    return 0;
}