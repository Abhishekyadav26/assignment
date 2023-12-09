#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows :");
    scanf("%d",&n);
    int half ;
    if (n%2==0){half=n/2;}
    else{half =(n+1)/2;}
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i==half || j==half){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}