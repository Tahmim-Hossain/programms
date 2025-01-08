#include<stdio.h>
void solve();
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();

    return 0;
}
void solve()
{
    int n;
    scanf("%d", &n);
    char arr[n];
    scanf("%s",arr);
    //fgets(arr, sizeof(arr), stdin);
    int i = 0,j = n - 1,cntI=0,cntJ=0;
    while(i<j)
    {
        if((arr[i]=='1' && arr[j]=='0') || (arr[i]=='0' && arr[j]=='1'))
        {
            i++;
            j--;
            cntI++;
            cntJ++;
        }
        else
            break;
    }
    //printf("%d %d\n",cntI,cntJ);
    printf("%d\n",n-(cntI+cntJ));
}