import java.util.Scanner;


public class B_Sakurako_and_Water
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-->0) 
        {
            int n;
            n = scanner.nextInt();
            int arr[][] = new int[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    arr[i][j] = scanner.nextInt();
                }
            }
            int res = 0;
            for (int i = 0; i < n; i++) {
                int k = 0, j = i, mn = 0;
                while (k < n && j < n) {
                    if (arr[k][j] < 0) {
                        mn = Math.min(mn, arr[k][j]);
                    }
                    k++;
                    j++;
                }
                res += Math.abs(mn);
            }

            for (int i = 1; i < n; i++) {
                int k=i,j=0,mn=0;
                while(k<n && j<n)
                {
                    if(arr[k][j]<0)
                    {
                        mn = Math.min(mn, arr[k][j]);
                    }
                k++;
                j++;
                }
                res += Math.abs(mn);
                }
            
            System.out.println(res);

        }
        scanner.close();
    }
}