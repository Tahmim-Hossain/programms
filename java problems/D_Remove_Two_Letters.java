import java.util.Scanner;
//import java.util.StringTokenizer;
public class D_Remove_Two_Letters
{
    public static void main(String [] args)
    {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-->0)
        {
            int n = scanner.nextInt();
            scanner.nextLine();
            String s = scanner.nextLine();
            int res = 1;
            for (int i = 1; i < n - 1; i++) {

                if (s.charAt(i - 1) != s.charAt(i + 1)) {
                    res++;
                }
            }
            System.out.println(res);
        }
        scanner.close();
    }
}
