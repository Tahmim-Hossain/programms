import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;
public class B_Intercepted_Inputs
{
    
    public static void solve(Scanner sc)
    {
        //Scanner sc = new Scanner(System.in);
        long k = sc.nextLong();
        Vector<Long> v = new Vector<>();
        for (long i = 0; i < k; i++)
        {
            long e = sc.nextLong();
            if ((k - 2) % e == 0)
                v.add(e);
        }
        Collections.sort(v);
        long i=0,j=v.size()-1;
        while(i<=j)
        {
            if(v.get((int)i) * v.get((int)j) == k-2){
                    System.out.println(v.get((int)i) + " " + v.get((int)j));
                    return;
                }else if(v.get((int)i) * v.get((int)j) > k-2) j--;
                else i++;
        }

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            solve(sc);
        }
        sc.close();
    }
}