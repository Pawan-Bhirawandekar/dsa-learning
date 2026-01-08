#include<stdio.h>
int main(){
    int n,i,arr[100],key,found=1;
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    printf("Enter array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
         
    printf("Array elements are: \n");
    for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    
    printf("Enter the element to search:  ");
    scanf("%d",&key);
    
    for(i=0;i<n;i++){
        if(arr[i] == key){
            printf("Element found at %d index.",i);
            found=1;
        }
    }
    
    if(found==0){
        printf("Element does not found in the array.");
    }
    
    return 0;
}