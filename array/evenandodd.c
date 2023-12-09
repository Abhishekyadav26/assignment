#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        if(arr[i]%2==0){
            arr[i]=arr[i]+10;    
        }
        else if (arr[i]%2!=0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]=arr[i];
        }       
    }
    for(int j=0;j<=4;j++){
        printf("%d ",arr[j]);
    }
    
    return 0;
}