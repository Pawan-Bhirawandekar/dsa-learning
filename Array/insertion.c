#include<stdio.h>
int main(){
    int arr[5],i,pos,val;
    printf("Enter 5 elements in array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements before insertion:\n");
    for(i=0;i<5;i++){
        printf("Element at %d index is %d\n",i,arr[i]);
    }

    printf("\nEnter the position where you want to insert an element (0-4): ");
    scanf("%d",&pos);
    printf("Enter the value to insert: ");
    scanf("%d",&val);

    if(pos<0 || pos>5){
        printf("Enter valid position");
    }else{
        for(i=5;i>pos;i--){
            arr[i]=arr[i-1];
        }
    }

    arr[pos]=val;

    printf("Array elements after insertion:\n");
    for(i=0;i<6;i++){
        printf("Element at %d index is %d\n",i,arr[i]);
    }
    return 0;
}