interface Bicycle {
    void applyBrake(int decrement);

    void speedUp(int increment); // corrected spelling
}

class AvonCycle implements Bicycle {
    void blowHorn() {
        System.out.println("pee pee");
    }

    // Corrected method name to match the interface
    public void applyBrake(int decrement) {
        System.out.println("Brake applied");
    }

    public void speedUp(int increment) {
        System.out.println("Speed increased");
    }
}

public class InterfaceExample { // corrected class name
    public static void main(String[] args) {
        AvonCycle cycleMy = new AvonCycle();
        cycleMy.applyBrake(1);
    }
}
