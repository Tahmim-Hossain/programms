#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat)); //for setting value -0 to all cells.

    for (int i = 0;i<e;i++)
    {
        int a,b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    // for(int i = 0;i<n;i++)
    // {
    //     for (int j = 0;j<n;j++)
    //     {
    //         cout << mat[i][j] << " " ;
    //     }
    // }
    if(mat[3][4]==1)
        cout << "connection ase" << endl;
    
    else
        cout << "connection nai" <<endl;
        return 0;
}