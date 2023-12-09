#include <stdio.h>
// sir ka code run kar raha hai but mera nahi 
void reverse(int arr[]){
    int j=0,i=4;
    while (j>i){
        int temp=arr[i];
        arr[j]=arr[i];
        arr[i]=temp;
        j--;
        i++;
    }
    return ;
}
int main(){
    int arr[5]={5,4,3,2,1};
    reverse(arr);
    for (int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }    
    return 0;
}