public class argument {
    static int sum(int...arr)
    {
        int result = 0;
        for (int a : arr)
            result=result + a;

        return result;
    }
    
    public static void main(String[] args)
    {
        System.out.println(sum(4, 5));
        System.out.println(sum(5, 6, 7, 8));
        
    }
    
}
