#include<stdio.h>
#define MAX 3

int stack[MAX];
int top=-1;

void push(int item){
    if(top==MAX-1){
        printf("Stack element overflow\n");
        return;
    }else{
        top++;
        stack[top]=item;
        printf("Item pushed in Stack is %d\n",item);
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty\n");
        return;
    }else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

void pop(){
    if(top==-1){
        printf("Stack is empty\n");
        return;
    }else{
        printf("\nItem poped from stack is %d\n",stack[top]);
        top--;
    }
}

int main(){
    int item, choice;
    while(1){
        printf("======Stack operations======\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter the element to push: ");
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
            printf("Exiting...\n");
                return 0;
            default:
                printf("Enter valid choice...\n");
                return 0;
        }
    }
    return 0;
}