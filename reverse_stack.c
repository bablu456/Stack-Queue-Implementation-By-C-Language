#include <stdio.h>
#define s 5
int stack[s];
int top = -1;
int temp = -1;
int size = s;
int temp_s[s];
void push(int a){
    if(top == size-1){
        printf("Stack is full and exit ! ");
    }else{
        stack[++top] = a;
        // temp_s[--size] = a;
    }
}
int pop(){
    if(top == -1){
        printf("this stack is empty !" );
    }else{
        return stack[top--];
    }
    
}
void display(){
    int k =0;
    while(top != -1){
        temp_s[k++] = pop();
    }
    for(int i=0;i<size;i++){
        printf("%d ",temp_s[i]);
    }
    printf("\n");
}

// void show(){

//     for(int i=0;i<size;i++){
//         stack[i] = pop;
//         printf("%d ",stack[i]);
//     }
// }
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("diplaying the original value before the reverse ! ");
    display();
    // show();
    
    // reverse();
    return 0;
}