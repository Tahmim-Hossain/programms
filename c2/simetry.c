#include<stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);  
    int a[m][n];  
    int transpose[n][m];  

    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            transpose[j][i] = a[i][j];  
        }
    }

    int flag = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(transpose[j][i]!=a[i][j])
                {
                    flag = 1;
            break;
                }
            //else flag = 1;
        }
        
    }
    if(flag)
        printf("Not simetric");
    else printf("Simetric");

    return 0;
}