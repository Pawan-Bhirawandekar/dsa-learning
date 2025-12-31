#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

struct Node *insert(struct Node *root, int key){
    if(root==NULL)
        return createNode(key);
    
    if(key < root->data)
        root->left=insert(root->left,key);
    else if(key > root->data)
        root->right=insert(root->right,key);
        
    return root;
        
}

void inorder(struct Node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void search(struct Node *root,int key){
    if(root==NULL){
        printf("Element not found\n");
        return;
    }
    if(root->data==key){
        printf("\nElement found: %d in a tree.\n",root->data);
        return;
    }

    if(key < root->data)
        search(root->left,key);
    else
        search(root->right,key);
    
}


int main(){
    struct Node *root = NULL;
    root=insert(root,50);
    insert(root,10);
    insert(root,30);
    insert(root,80);
    insert(root,20);
    insert(root,40);
    insert(root,90);
    insert(root,60);
    
    printf("Inorder Traversal: ");
    inorder(root);

    search(root,20);
    return 0;

}
