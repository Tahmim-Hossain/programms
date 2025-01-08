import java.util.Scanner;

public class A_Is_It_a_Cat
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            sc.nextLine(); // Consume the leftover newline
            String s = sc.nextLine();
            String ls = s.toLowerCase();
            StringBuilder ns = new StringBuilder(); // Mutable string builder
            
            for (int i = 0; i < n - 1; i++) {
                if (ls.charAt(i) != ls.charAt(i + 1)) {
                    ns.append(ls.charAt(i));
                }
            }
            ns.append(ls.charAt(n - 1)); // Append the last character
            
            //System.out.println(ns);
            if(ns.toString().equals("meow"))
            {
                System.out.println("YES");
            }
            else System.out.println("NO");
        }
        
        sc.close(); // Close the scanner here
    }
}
