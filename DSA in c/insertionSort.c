#include<stdio.h>
void insertionSort(int *A,int n)
{
    int key, j;
    for (int i = 1; i <= n - 1;i++)
    {
        key = A[i];
        j = i - 1;
        while(j>=0 && A[j]>key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
void printArray(int *A,int n)
{
    for (int i=0; i < n;i++)
    {
        printf("%d  ", A[i]);
    }
    printf("\n");
}

int main(){
    int A[] = {12, 54, 65, 23, 9, 7};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}