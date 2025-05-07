#include <stdio.h>
#define s  5
int top = -1;
int stack[s];
int ss = s;
int push(int a){
    if(top == s-1){
        printf("stack is overflow and exit !");
    }
    else{
        stack[++top] = a;   
    }
    // printf("%d",stack[4]);
}

int main(){
   
    push(10);
    push(20);
    push(20);
    push(20);
    push(20);
    printf("%d",stack[3]);
    
    return 0;
}