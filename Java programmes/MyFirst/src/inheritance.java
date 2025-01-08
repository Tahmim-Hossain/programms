class Base
{
    int x;

    public int getX() {
        return x;
    }
    
    public void setX(int x) {
        this.x = x;
    }
    public void printMe()
    {
        System.out.println("contractor");
    }
}
class Derived extends Base
{
    int y;

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}

public class inheritance
{
    public static void main(String[] args)
    {
        Base b=new Base();
        b.setX(4);
        System.out.println(b.getX());
    }
}