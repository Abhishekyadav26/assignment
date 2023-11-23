#include<stdio.h>
int main(){
    int n,a;
    printf("enter number of rows you want to print:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if (i%2!=0){a=1;}
        else{a=0;}
        for (int j=1;j<=i;j++){
            printf("%d ",a);
            if(a==0){a=1;}
            else{a=0;}
        }
        printf("\n");
    }
    return 0;
}