#include<stdio.h>
int main(){
    int i, j, temp,n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\nArray elements are: \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("Array elements in the sorted form:(Ascending order) \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}