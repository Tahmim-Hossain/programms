import java.util.Scanner;

public class A_Sakurako_and_Kosuke
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-->0)
        {
            int x = scanner.nextInt();
            if (x % 2 == 1)
                System.out.println("Kosuke");
            else
                System.out.println("Sakurako");
        }
        scanner.close();
    }
}