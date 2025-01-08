#include<stdio.h>

int binarySearch(int arr[], int size, int element) {
    int mid, high, low, index = -1,c1=0,c2=0;
    low = 0;
    high = size - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            index = mid;
            high = mid - 1;
            c2++;
            //low = mid + 1; 
        } 
        else if(arr[mid] == element)
        {
            index = mid;
            //high = mid - 1;
            c1++;
            low = mid + 1;
        }
        else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return c1+c2; 
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);
    int size = sizeof(arr) / sizeof(int);
    int searchIndex = binarySearch(arr, size, target);
    
    printf("%d\n", searchIndex);

    return 0;
}
