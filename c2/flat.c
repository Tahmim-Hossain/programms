#include <stdio.h>

int main() {
    int 
    int flat_array[] = {1, 2, 3, 4, 5, 6};

    
    int rows = 2, cols = 3;

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            printf("%d ", flat_array[i * cols + j]);
        }
        printf("\n");
    }

    return 0;
}
