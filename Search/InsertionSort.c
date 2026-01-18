#include<stdio.h>
int main(){
    int n, i, j, key;
    printf("Enter size of array element: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting: \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    printf("\nArray after sorting: \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   
    return 0;
}