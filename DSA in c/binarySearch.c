#include<stdio.h>
int binarySearch(int arr[],int size,int element)
{
    int mid, high, low;
    low = 0;
    high = size - 1;
    while(low<=high)
    {
    mid = (low + high) / 2;
    if(arr[mid]==element)
        return mid;
    if(arr[mid]<element)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
    }
    return -1;
}
int main(){
    int arr[] = {1, 3, 21, 56, 23, 56, 32};
    int size = sizeof(arr) / sizeof(int);
    int searchIndex = binarySearch(arr, size, 56);
    printf("%d", searchIndex);
    return 0;
}