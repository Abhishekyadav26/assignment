#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows of :");
    scanf("%d",&n);
    int nsp = 1;
    int nst = n-1;
    for(int m=1;m<=2*n-1;m++){
        char ch=(char)m+64;
        printf("%c ",ch);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            char ch =(char)a+64;
            printf("%c ",ch);
            a++;
        }
        for (int k=1;k<=nsp;k++){
            char ch =(char)a+64;
            printf("  ");
            a++;
        }
        for(int j=1;j<=nst;j++){
            char ch =(char)a+64;
            printf("%c ",ch);
            a++;
        }
        nsp=nsp+2;
        nst--;
        printf("\n");
    }
    return 0;
}

















































































































































































