#include<stdio.h>
void greeting(int n){
    for(int i=1;i<=n;i++){
        printf("good morning\n");
    }
}
void greetings(int n){
    if(n==0){return;}
    printf("good night\n");
    greetings(n-1);
    return;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    greeting(n);
    return 0;
}