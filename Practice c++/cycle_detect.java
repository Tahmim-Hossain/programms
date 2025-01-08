import java.util.Scanner;
import java.util.Vector;
public class cycle_detect {
    public static void Cycle(Vector<Integer> arr)
    {
        int slow = 1, fast = 1;
        while (true) {
            slow = arr.get(slow - 1);
            fast = arr.get(arr.get(fast - 1) - 1);
            if (slow == fast) {
                break;
            }
        }
        int cycle_start=1;
            while(cycle_start!=slow)
            {
                slow = arr.get(slow - 1);
                cycle_start = arr.get(cycle_start - 1);
            }
            int current=cycle_start;
            Vector<Integer> v = new Vector <>();
            do { 
                v.add(current);
                current = arr.get(current - 1);
            } while (current != cycle_start);
            for(Integer it:v)
            {
                System.out.print(it+" ");
            }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Vector<Integer> v = new Vector<>(n);
        for(int i=0;i<n;i++)
        {
            int element = sc.nextInt();
            v.add(element);
        }
        Cycle(v);
        sc.close();
    }
    
}