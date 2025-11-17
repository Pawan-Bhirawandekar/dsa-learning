#include<stdio.h>
int main(){
    int arr[5],i,pos;
    printf("Enter 5 elements of the array: \n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements are: \n");
    for(i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }

    printf("Enter the position to delete element (0-4): ");
    scanf("%d",&pos);
    if(pos<0||pos>5){
        printf("Invalid position!\n");
    }
    
    for(i=pos;i<4;i++){
        arr[i]=arr[i+1];
    }

    printf("\nArray after deletion:\n");
    for(i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}