#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r,&c);

    int array_2d[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &array_2d[i][j]);
        }
    }

    int size = r * c;
    
    
    int flat_array[size];
    int index = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            flat_array[index++] = array_2d[i][j];
        }
    }

    
    printf("Unique elements: ");
    for (int i = 0; i < size; i++) {
        int unique = 1;  

        
        for (int j = 0; j < size; j++) {
            if (i != j && flat_array[i] == flat_array[j]) {
                unique = 0; 
                break;
            }
        }

        
        if (unique) {
            printf("%d ", flat_array[i]);
        }
    }
    
    printf("\n");

    return 0;
}
