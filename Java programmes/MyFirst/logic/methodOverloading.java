public class methodOverloading {
    static void change(int a)
    {
        a = 98;  //applying this will not create any changes
    }

    static void change2(int [] arr)
    {
        arr[0] = 98;
    }
    

    public static void main(String[] args)
    {
        int [] marks={23,76,13,65,90,49};
        change2(marks);
        System.out.println(marks[0]);   
    }
}
