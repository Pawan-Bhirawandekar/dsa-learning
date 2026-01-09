#include<stdio.h>
int main(){
    int n, i, j, temp, key, low, high,mid, found=0;
    printf("Enter size of array element: ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter array Elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    printf("Sorted Array Elements:");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    printf("\nEnter element to search: ");
    scanf("%d",&key);
    
    low=0;
    high=n-1;
    while(low<=high){
        mid = (low+high)/2;
        
        if(arr[mid]==key){
            printf("%d element found at %d position.",key, mid);
            found=1;
            return 0;
        }else if(arr[mid]<key){
            low=mid+1;
        }else if(arr[mid]>key){
            high=mid-1;
        }
        
        found=0;
    }
    
    if(found==0){
        printf("Element does not exist in the array. \n");
    }
    
    return 0;
}