#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;
//insert at the END
void insertionEnd(int value){
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
    
    printf("\n%d node successfully inserted at the end of singly linked list.\n",value);
}

//insert at the Begining
void insertBegin(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=head;
    head=newNode;
    printf("%d element successfully insrted at the begining of the singly linked list.\n",value);
}

void insertAtPosition(int value,int pos){
    int i=1;
    
    if(pos<=0){
        printf("Please eneter valid position.");
        return;
    }
    
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    
    if(pos==1){
        newNode->next=head;
        head=newNode;
        printf("%d Element inserted successfully.",value);
        return;
    }
    
    if(head==NULL){
            printf("Position out of bound.");
            free(newNode);
            return;
        }
        
        struct Node *temp=head;
        
        for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
        if (temp == NULL) {
        printf("Position out of bound.\n");
        free(newNode);
        return;
    }
        
        newNode->next=temp->next;
        temp->next=newNode;
        
        printf("%d Element successfully insrted at %d position.",value,pos);
        
}

void display(){
    struct Node *temp=head;
    if(head==NULL){
        printf("List is empty.");
        return;
    }
    printf("Singly Linked List Contains: ");
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}


int main(){
    int ch,val,pos;
    printf("\nSingly Linked List: ");
    while(1){
        printf("\n1.Insert element at the End.  \n2.Insert element at the Begining. \n3.Insert an element at specific position.  \n4.Display. \n5.Exit. \nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){
        case 1: printf("Enter an element: ");
        scanf("%d",&val);
        insertionEnd(val);
        break;
        case 2: printf("Enter an element: ");
        scanf("%d",&val);
        insertBegin(val);
        break;
        case 3: printf("Enter position where you want to insert an element: ");
        scanf("%d",&pos);
        printf("Enter an element: ");
        scanf("%d",&val);
        insertAtPosition(val,pos);
        break;
        case 4: display();
        break;
        case 5: printf("Exiting the program.....");
        return 0;
        break;
        default: printf("Enter valid choice. ");
        }
    }
    return 0;
}
