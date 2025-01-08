#include<stdio.h>
int linearSearch(int arr[],int size,int element)
{
    for (int i = 0; i < size;i++)
    {
        if(arr[i]==element)
        {
            return i; //return the index
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 3, 21, 56, 23, 56, 32};
    int size = sizeof(arr) / sizeof(int);
    int searchIndex = linearSearch(arr, size,4);
    printf("%d", searchIndex);
    return 0;
}