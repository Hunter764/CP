//Given a number N, write a program to print numbers from 1…N.
#include<stdio.h>
void increasing(int x,int n){
    if(x>n) return ;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}