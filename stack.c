#include <stdio.h>
#define s 5
int stack[s];
int top = -1;
int size = s;
void push(int a){
    if(top==size-1){
        printf("stack overflow and exit !\n");
    }else{
        stack[++top] = a;
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty ! \n");
    }else{
        stack[top--];
    }
}
void display(){
    for(int i=0;i<size;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main(){
    int choice , item ;
    printf("1 : - Push\n2 : - Pop\n3 : - Display\n4 : - Exit\n");
    while(1){
        printf("Enter your choices : - \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enetr the item : \n");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("invalid choices ! ");
                      
        }
    }
    return 0;
}