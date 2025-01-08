#include<stdio.h>
void solve();
void sort(int arr[], int n);
void swap(int *a,int *b);
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();

    return 0;
}
void solve()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    sort(arr, n);

    for (int i = 0; i < n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}
void sort(int arr[], int n)
{
    int temp;
    for(int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j < n;j++)
        {
            if(arr[j]<arr[i])
                swap(&arr[j],&arr[i]);
        }
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}