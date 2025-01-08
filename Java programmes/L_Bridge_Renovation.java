import java.util.Scanner;
public class L_Bridge_Renovation
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int r = (2 * n + 2) / 3 + (n + 1) / 2;
        int s1 = 2 * n / 3;
        int s2 = n / 2;
        if ((2 * n - s1 * 3) == 1 && (n - s2 * 2) == 1)
            r--;
        
        System.out.println(r);
        sc.close();
    }
    
}