#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head=NULL;

void insertion_Begin(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->prev=NULL;
    newNode->next=head;
    
    if(head != NULL){
        head->prev=newNode;
    }
    
    head=newNode;
    
    printf("Element %d inserted at the begining of the doubly linked list successfully.\n",value);
}

void insertion_End(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->prev=NULL;
    newNode->next=NULL;
    
    struct Node *temp=head;
    if(head==NULL){
        head=newNode;
    }else{
        while(temp->next != NULL){
            temp=temp->next;
        }
        newNode->prev=temp;
        temp->next=newNode;
    }
    
    printf("Element %d successfully been inserted at the end of doubly linked list.\n",value);
}

void display(){
    if(head==NULL){
        printf("Doubly libked list is empty.\n");
        return;
    }
    printf("Doubly linked list contains: \n");
    struct Node *temp=head;
    while(temp != NULL){
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void search(int key){
    struct Node *temp=head;
    int pos=1;
    
    if(head==NULL){
        printf("Doubly linked list is empty.\n");
        return;
    }
    
    while(temp != NULL){
        if(temp->data==key){
            printf("%d element is available in doubly linked list at %d index.\n",key,pos);
            return;
        }
        temp=temp->next;
        pos++;
    }
    
    printf("Element %d does not found in doubly linked list.\n",key);
}
int main(){
    int val,ch,key;
    printf("*****Doubly Linked List*****");
    while(1){
        printf("\n1.Insertion at the begining of doubly linked list \n2.Insertion at the End of doubly linked list \n3.Display an elements from doubly linked list.\n4.Search an elment\n5.exit\n4");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Enter a number: ");
            scanf("%d",&val);
            insertion_Begin(val);
            break;
            case 2:printf("Enter a number: ");
            scanf("%d",&val);
            insertion_End(val);
            break;
            case 3: display();
            break;
            case 4: printf("Enter an element to search: ");
            scanf("%d",&key);
            search(key);
            break;
            case 5: printf("Exiting the program....");
            return 0;
            break;
            default:printf("Choose a valid option.");
        }
    }
    return 0;
}
