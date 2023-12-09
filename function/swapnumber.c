// whitou third virable;
#include <stdio.h>
int main(){
    int a,b;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is %d \n",a);
    printf("b is %d ",b);
    return 0;

}