#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int t1 = 0, t2 = 1, nextTerm;
    if (n >= 2) {
        printf("Fibonacci Series: %d, %d", t1, t2);

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
        
    } else {
        printf("Number of terms must be at least 2.\n");
    }

    return 0;
}