#include<stdio.h>
#define ll long long
#define INT_MAX 10e7
void solve();
int findMin(int arr[], int n);
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
    int n,sum = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    //printf("%d",findMin(arr, n));
    int min = findMin(arr, n);
    printf("%d\n",sum-(min*n));
}

int findMin(int arr[], int n)
{
    int min=INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        min = arr[i];
    }
    return min;
}