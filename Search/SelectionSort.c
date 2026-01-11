#include<stdio.h>
int main(){
    int n,i,j,temp,min;
    printf("Enter size of array element: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Array elements are: \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("Sorted array elements: \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}