interface MyCamera {
    void takeSnap();

    void recordVideo();
}

interface MyWifi {
    String[] getNetworks();

    void connectToNetwork(String network);

}

class MyCellPhone {
    void callNumber(int phoneNumber) {
        System.out.println("calling" + phoneNumber);
    }

    void pickCall() {
        System.out.println("Connecting...");
    }
}

class MySmartPhone extends MyCellPhone implements MyWifi, MyCamera {
    public void takeSnap()
    {
        System.out.println("Taking snap");
    }

    public void recordVideo()   
    {
        System.out.println("Recording...");
    }

    public String[] getNetworks()
    {
        System.out.println("gettinig list");
        String[] networkLists = { "harry" };
        return networkLists;
    }

    public void connectToNetwork(String network)
    {
        System.out.println("Connecting..."+network);
    }
}  

public class defaultMethods {
    public static void main(String[] args) {
        MySmartPhone ms = new MySmartPhone();
        String[] ar = ms.getNetworks();
        for(String item: ar)
        {
            System.out.println(item);
        }
    }
}
