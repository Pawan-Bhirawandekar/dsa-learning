#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1,val;

void insertion(int item){
    if((rear+1)%SIZE==front){
        printf("Queue is Overflow.\n");
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }else{
        rear=(rear+1)%SIZE;
    }
    queue[rear]=item;
    printf("%d element added in the queue.\n");
}

void deletion(){
    if(front==-1){
        printf("\nQueue is empty.");
        return;
    }
    int deletedItem=queue[front];
    if(front==rear){
        front=-1;
        rear=-1;
    }else{
        front=(front+1)%SIZE;
    }
    printf("%d element deleted from the queue.\n",deletedItem);
}

void display(){
    if(front==-1||rear==-1){
        printf("Queue is empty.\n");
        return;
    }
    printf("\nQueue elements are: \n");
    int i=front;
    while(1){
        printf("%d\n",queue[i]);
        if(i==rear)
            break;
        i=(i+1)%SIZE;
    }
}

int main(){
    int opt;
    printf("\n*****Circular Queue Operations*****");
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    while(1){
        printf("\nEnter choice: \n");
        scanf("%d",&opt);
        switch(opt){
            case 1: printf("Enter element to insert: ");
            scanf("%d",&val);
            insertion(val);
            break;
            case 2: deletion();
            break;
            case 3: display();
            break;
            case 4: printf("Exiting the program....");
            return 0;
            break;
            default: printf("Enter valid choice.");
        }
    }
    return 0;
}
