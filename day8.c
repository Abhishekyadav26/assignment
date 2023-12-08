#include <stdio.h>
int main(){
    int n ;
    printf("enter the number of rows:");
    scanf("%d",&n);
    int nsp=n-1,nst=1,var=1; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int k=1;k<=nst;k++){
            printf("%d ",var);
            if(i*2-1==var){
                var--;
            }
            else{
                var++;
            }
        }
        nsp--;
        nst=nst+2;

        printf("\n");
    }
    return 0;
}