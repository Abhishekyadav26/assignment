#include<stdio.h>
int main(){
    int n,d;
    printf("enter number of rows you want to print:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        int a=1;
        for (int k=1;k<=i;k++){
            d=a+64;
            char ch = (char)d;    
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}