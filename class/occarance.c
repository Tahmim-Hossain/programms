
#include<stdio.h>

int Occurrence1(int arr[], int size, int element) {
    int mid, high, low, index = -1;
    low = 0;
    high = size - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            index = mid; 
            high = mid - 1;
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return index;
}


int Occurrence2(int arr[], int size, int element) {
    int mid, high, low, index = -1;
    low = 0;
    high = size - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            index = mid; 
            low = mid + 1; 
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return index;
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
    int first = Occurrence1(arr, size, target);
    int last = Occurrence2(arr, size, target);
    
    if (first == -1 || last == -1) {
        printf("0\n"); 
    } else {
        printf("%d\n", last - first + 1); 
    }

    return 0;
}
