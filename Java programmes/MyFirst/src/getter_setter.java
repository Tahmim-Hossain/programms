class MyEmployee
{
    private int id;
    private String name;
    public String getName()
    {
        return name;
    }

    public void setName(String n)
    {
        this.name = n;
    }
    public int getId()
    {
        return id;
    }
    public void setId(int i)
    {
        this.id = i;
    } 
}
public class getter_setter {
    public static void main(String[] args) {
        MyEmployee harry = new MyEmployee();

        harry.setName("John");
        System.out.println(harry.getName());
        harry.setId(94);
        System.out.println(harry.getId());
    }
}
