import java.util.Scanner;
 
public class A_Alyona_and_a_Square_Jigsaw_Puzzle {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int sum = 0, res = 0, i = 1;
            while(n-->0){
                sum += sc.nextInt();
                while(i * i <= sum){
                    if(i * i == sum){
                        res ++;
                        i += 2;
                    }
                    if(i * i < sum){
                        i += 2;
                    }
                    if(i * i > sum) break;
                }
            }
            System.out.println(res);
        }
    }
}