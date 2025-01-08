#include <stdio.h>

int main() {
    int r, co;

    
    scanf("%d", &r);
    
    scanf("%d", &co);

    int arr[r][co];

    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < co; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int c[100] = {0};

    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < co; j++) {
            c[arr[i][j]]++;
        }
    }

    
    for (int i = 0; i < 100; i++) {
        if (c[i] > 0) {
            printf("%d  %d", i, c[i]);
        }
    }

    return 0;
}
