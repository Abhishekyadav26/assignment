#include <stdio.h>
int main(){
    int n;
    printf("hey user enter the no terms you wanted to print :");
    scanf("%d",&n);// for 4 7 10 13 ...... n with using math.
    int i=4;
    while(i<=3*n+1){
        printf("%d ",i);
        i=i+3;
    }
    return 0;
}