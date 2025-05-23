#include<stdio.h>
void solve();
void swap(int *a,int *b);
int partition(int arr[], int low, int high);
void quickSort();
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    solve();

    return 0;
}
void swap(int *a,int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[],int low, int high)
{
    if(low<high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void solve()
{
    int n;
    scanf("%d", &n);
    int arr[n],diffArr[n-1];
    for (int i = 0; i < n;i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);
    for(int i = 0; i < n-1; i++)
    {
        diffArr[i] = arr[i + 1] - arr[i];
    }
    quickSort(diffArr, 0, n - 2);

    printf("%d\n", diffArr[0]);
}

