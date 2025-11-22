// c program to perform binary search

#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = 8;
    int target;
    int low = 0, high = n - 1, middle;
    printf("Enter the element to search in the array: ");
    scanf("%d", &target);
    // program
    while (low <= high)
    {
        middle = (low + high) / 2;

        if (arr[middle] == target)
        {
            printf("Target %d is found at index %d", target, middle);
            return 0;
        }
        else if (arr[middle] > target)
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }
    printf("Target %d is not found in the array\n", target);
    return 0;
}