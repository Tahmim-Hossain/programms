import java.util.Scanner;

public class stringOperation {
    public static void main(String[] args) throws Exception {
        String name = "hell";
        Scanner sc = new Scanner(System.in);
        String st =sc.next();
        System.out.println(name);
        System.out.println(st);
        String lstring = name.toLowerCase();
        System.out.println(lstring);
        String lstring2 = name.toUpperCase();
        System.out.println(lstring2);
        String nonTremmedString = "   harry  ";
        System.out.println(nonTremmedString.trim());
        System.out.println(name.substring(1,4));
        System.out.println(name.replace( 'l','w'  ));
        String name2 = "Harry";
        System.out.println(name2.indexOf("rry"));
        System.out.println(name2.indexOf("rry", 4));
        System.out.println(name2.lastIndexOf("rry"));
        System.out.println(name2.equals("harry"));
        System.out.println(name2.equalsIgnoreCase("haRRy"));
        
    }
}
