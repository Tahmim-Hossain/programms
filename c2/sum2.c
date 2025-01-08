#include<stdio.h>

int main(){
    int r, c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < c; i++) {
        sum += a[0][i];
    }

    
    for (int i = 0; i < c; i++) {
        sum += a[r - 1][i];
    }

    
    for (int i = 1; i < r - 1; i++) {
        sum += a[i][0];        
        sum += a[i][c - 1]; 
    }
    printf("sum = %d\n",sum);
    return 0;
}