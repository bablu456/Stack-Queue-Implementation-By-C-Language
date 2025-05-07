#include <stdio.h>
#define s 5
int quene[5];
int start = -1;
int end = -1;
int noe = 0;
void push(int a){
    if(noe == 5){
        printf("the quene is full !\n");
    }else{
        noe++;
        quene[++end] = a;
        start = 0;
    }
}
void pop(){
    if(noe == -1){
        printf("the quene is empty\n");
    }else{
        quene[start++];
        noe--;
    }
}
void display(){
    if(noe == 0){
        printf("the quene is empty !\n");
    }else{
        for(int i=start;i<=end;i++){
            printf("%d ",quene[i]);
        }
    }
}
void peek(){
    if(noe != -1){
    printf("%d ",quene[end]);
    }
}
int main(){
    int choice , item ;
    printf("1 : - push\n2 : - pop\n3 : - display\n4 : - peek\n5 : - exit");
    while(1){
        printf("Enter your choices : \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter your value : \n");
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
            peek();
            break;
            case 5:
            return 0;
            break;
            default:
            printf("invalid option");
        }
    }
    return 0;
}