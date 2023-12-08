#include <stdio.h>
int main(){
    int n;
    printf("number of elements in array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d elements:",i+1);
        scanf("%d",&arr[i]);
    }
    int leader= arr[0];
    for(int i=0;i<n-1;i++){
        if(leader<arr[i]){
            leader=arr[i];
        }
    }
    printf("%d",leader);
    /*printf("{");
    printf("}");*/    
    return 0;
}