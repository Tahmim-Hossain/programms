#include <stdio.h>
#define ll long long

void sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Compare adjacent elements
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_code()
{
    printf("cool");
}

int main(){
    //print_code();
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}