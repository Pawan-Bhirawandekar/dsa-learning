#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

//Insertion at the End
void insertEnd(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    
    if(head==NULL){
        head=newNode;
    }else{
        struct Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    printf("Element inserted at the End successfully.\n");
}

//Insertion at the Begining
void insertBegin(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=head;
    head=newNode;
    printf("Element inserted at the Begining successfully.\n");
}

//Display the linked list
void display(){
    struct Node *temp=head;
    if(temp==NULL){
        printf("List is empty.\n");
        return;
    }
    printf("Linked list: \n");
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(){
    int opt,value;
    while(1){
        printf("Singly Linked List:");
        printf("\n1.Insertion at the Begining of Linked List \n2.Insertion at the End of Singly Linked List\n3.Display\n4.Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&opt);
        switch(opt){
            case 1: printf("Enter a value: ");
                    scanf("%d",&value);
                    insertBegin(value);
                    break;
            case 2: printf("Enter a value: ");
                    scanf("%d",&value);
                    insertEnd(value);
                    break;
            case 3: display();
                    break;
            case 4: printf("Exiting....");
                    return 0;
                    break;
            default : printf("Enter valid choice.");
    }
    }
    return 0;
}
