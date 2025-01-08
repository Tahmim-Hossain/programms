class Employee
{
    int id;
    String name;

    public void printDetails()
    {
        System.out.println(id);
        System.out.println(name);
    }
}

public class customClass {
    public static void main(String[] args) {
        Employee harry = new Employee();
        harry.id = 12;
        harry.name="John";
        System.out.println(harry.id);
        harry.printDetails();
    }
    
}
