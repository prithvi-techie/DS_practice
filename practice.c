// // program to search an element in the array 
// #include<stdio.h>
// int main(){
//     int arr[]={10,20,30,40,50};
//     int n = sizeof(arr);
//     int target,i,found=0;
//     printf("Enter the element to be searched: ");
//     scanf("%d",&target);
//     // perform linear search
//     for(i=0; i<n; i++){
//         if (arr[i]==target){
//             printf("elemend %d is found at index %d.\n",target,i);
//             found = 1;
//             break;}}
//     if (!found) {
//         printf("Element %d not found int the array",target);
//     }
// }






// write a program to search an element in the array
#include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int n = sizeof (arr);
    int target, i , found =0;
    printf("Enter the element to be searched: ");
    scanf("%d",&target);
    // linear search program
    for (i=0;i<n;i++) { //maanga jo mera h jata ky tera h 
        if (arr[i]==target){
            printf("element %d is found at index %d\n",target,i);
            found =1;
            break;
        }
    }
    if (!found){
        printf("element %d is not in the array",target);
    }


}



