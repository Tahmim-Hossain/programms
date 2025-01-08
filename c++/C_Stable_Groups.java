import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;
public class C_Stable_Groups
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n, x, k;
        n = scanner.nextInt();
        x = scanner.nextInt();
        k = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = scanner.nextInt();
        }
        Arrays.sort(arr);
        Vector<Integer> group_dif = new Vector<>();
        for(int i=0;i<n-1;i++)
        {
            if (arr[i + 1] - arr[i] > 1) {
                group_dif.add(arr[i + 1] - arr[i]);
            }
        }
        Collections.sort(group_dif);
        int gaps = group_dif.size();
        for(int i=0;i<group_dif.size();i++)
        {
            x -= group_dif.get(i) / k;
            if (group_dif.get(i) % k == 0)
                x++;
            if (x >= 0)
                gaps--;

            else
                break;
        }
        System.out.println(gaps + 1);
        scanner.close();
    }
}