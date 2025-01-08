#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows,&cols);
    int array[rows][cols];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int flat[rows * cols];

    
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flat[index++] = array[i][j];
        }
    }

    
    for (int i = 0; i < rows * cols; i++) {
        printf("%d ", flat[i]);
    }
    printf("\n");

    return 0;
}
