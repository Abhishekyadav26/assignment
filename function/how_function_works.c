#include<stdio.h>
void Abhi(){
    printf("you are in abhi function\n");
    return ;
}
void Neha(){
    printf("you are in neha function\n");
    Abhi();
    return ;
}
void SNeha(){
    printf("you are in sneha function\n");
    Neha();
    return ;
}
void renu(){
    printf("you are in mummy function\n");
    SNeha();
    return ;
}
int main(){
    printf("let's start \n");
    renu();
    return 0;
}