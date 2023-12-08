#include<stdio.h>
int sumproduct(int n){
    int sum=0,b=0;
       for(int i=1;i<n;i++){
           if(n%i==0){
            sum=sum+i; 
            }
        }
        if(n==sum){
            b=1;
        }
    return b;    
}
int main(){
    int n;
    printf("enter the nomber:");
    scanf("%d",&n);
    int pro=sumproduct(n);
    printf("%d",pro);
    return 0;
}