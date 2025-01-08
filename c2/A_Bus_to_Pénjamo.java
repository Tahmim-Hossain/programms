
import java.util.Scanner;

public class A_Bus_to_Pénjamo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int r = sc.nextInt();
            int[] ar = new int[n];
            long res = 0, left = 0;
            for(int i=0; i<n; i++){
                ar[i] = sc.nextInt();
                res += 2*(ar[i]/2);
                r -= ar[i]/2;
                ar[i] = ar[i] % 2;
                if(ar[i]==1) left ++;
            }
            // int lefts = r*2;
            if(r==left || left < r) res += left;
            else{
                left -= r;
                res += (r-left);
            }
            System.out.println(res);
        }
    }
}