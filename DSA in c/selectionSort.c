#include<stdio.h>
void selectionSort(int *A,int n)
{
    int indexOfMin,temp;
    for (int i = 0; i < n - 1;i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n;j++)
        {
            if(A[j]<A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin]=temp;
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
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}