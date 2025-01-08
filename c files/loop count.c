#include <stdio.h>

int main() {
    int loopCount = 0;
    int m,n;
    scanf("%d %d",&m,&n);

    // Your loop
    for (int i = m; i < n; ++i) {
        // Your loop body

        // Increment the loop count
        loopCount++;
    }

    // Print the number of loops executed
    printf("Number of loops executed: %d\n", loopCount);

    return 0;
}
