import java.util.Scanner;

public class multiDimentionalArrays
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int[] marks;
        int[][] floats=new int[6][6];
        for (int i = 0; i < 6; i++)
        {
            for(int j=0;j<6;j++)
            {
                floats[i][j] = scanner.nextInt();
            }
        }
        for(int i=0;i<floats.length;i++)
        {
            for(int j=0;j<floats[i].length;j++)
            {
                System.out.println(floats[i][j]);
                System.out.println(" ");
            }
        }
    }
}