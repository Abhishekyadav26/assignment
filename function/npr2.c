// different code for npr
// wrong hai
#include <stdio.h>
int main(){
    int n;
    printf("enter no. of rows you want to print:");
    scanf("%d",&n);
    int space =n;
    for (int i=0;i<=n;i++){
        for(int k=1;k<=space;k++){
            printf("  ");
        }
        space--;
        int first =1;
        for (int j=0;j<=i;j++){
            printf("%d ",first);
            first = first*((i-j)/(j+1));
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}