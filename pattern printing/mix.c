#include<stdio.h>
int main(){
    int d, n;//wrong hai code mera.
    printf("enter number of rows you want to print:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 1;
        d=a+64;
        char ch = (char)d;
        if(i%2!=0){
            for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
            }
        }
        else{
            printf("%c ",d);
            a++;
        }
  
        printf("\n");
    }
    return 0;
}