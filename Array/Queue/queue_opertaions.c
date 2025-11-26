#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1,val;
void insertion(int value){
    if(rear==SIZE-1){
        printf("Queue is full\n");
        return;
    }
    if(front==-1){
        front=0;
    }
    rear++;
    queue[rear]=value;
    printf("%d inserted inside the queue\n",value);
}

void deletion(){
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }
    printf("%d element deleted successfully\n",queue[front]);
    front++;
    if(front>rear){
        front=rear=-1;
    }
}

void display(){
    if(front==-1||front>rear){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    for(int i=front;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}

int main(){
    int opt;
    while(1){
        printf("\n*****Queue Operations*****");
        printf("\n1.Insertion \n2.Display \n3.Deletion \n4.Exit \n");
        printf("Choose an option: ");
        scanf("%d",&opt);
        switch(opt){
            case 1:
                printf("\nEnter an element: ");
                scanf("%d",&val);
                insertion(val);
                break;
            case 2:
                display();
                break;
            case 3:
                deletion();
                break;
            case 4:
                printf("****Exiting the program*******");
                return 0;
            default:
                printf("Choose the valid option.\n");
        }
    }

}
