#include <stdio.h>
int main(){

    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target,i,found=0;
    printf("Enter the element to search: ");
    scanf("%d",&target);

    // linear search
    for(i=0;i<n;i++)
    if(arr[i]==target){
        printf("element %d found at index %d.\n",target,i);
        found=1;
        break;
    }


    if(found==0){
    printf("element %d is not found in the array",target);
    }

    

}