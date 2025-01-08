import java.util.Scanner;

public class Function {
    static int logic(int x, int y) {
        int z;
        if (x > y)
            z = x + y;

        else
            z = (x + y) * 5;

        return z;
    }

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int a;
        int b;
        a = sc.nextInt();
        b = sc.nextInt();
        int c = logic(a, b);

        System.out.println(c);

    }
}