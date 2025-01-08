#include <stdio.h>
#include <stdlib.h>

void solve();
int *vector(size_t s);
int *r_vector(int *vector, size_t n_s);

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();

    return 0;
}

void solve()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    size_t size = 1;
    int *vec = vector(size);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt++;
        }

        if (arr[i] == 1 || i == n - 1)
        {
            vec[size - 1] = cnt;
            size++;
            vec = r_vector(vec, size);
            cnt = 0;
        }
    }
    int a[size - 1];
    int max = INT_MIN;
    // Print the resulting vector
    for (size_t i = 0; i < size - 1; i++)
    {
        //printf("%d ", vec[i]);
        a[i] = vec[i];
        if(max < vec[i])
        {
            max = vec[i];
        }
    }
    
    //printf("\n");
    printf("%d\n", max);
    // Free allocated memory
    free(vec);
}

int *vector(size_t s)
{
    int *vec = (int *)malloc(s * sizeof(int));
    if (!vec)
    {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    return vec;
}

int *r_vector(int *vec, size_t n_s)
{
    int *new_vec = (int *)realloc(vec, n_s * sizeof(int));
    if (!new_vec)
    {
        perror("Failed to reallocate memory");
        exit(EXIT_FAILURE);
    }
    return new_vec;
}
