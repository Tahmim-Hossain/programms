import java.util.Scanner;

public class ArrayInputExample {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the size of the array
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();
        
        // Create an array of the specified size
        int[] array = new int[size];
        
        // Read elements into the array
        System.out.println("Enter " + size + " integers:");
        for (int i = 0; i < size; i++) {
            System.out.print("Element " + (i + 1) + ": ");
            array[i] = scanner.nextInt();
        }
        
        // Print the elements of the array
        System.out.println("Array elements are:");
        for (int i = 0; i < size; i++) {
            System.out.println(array[i]);
        }
        
        // Close the scanner
        scanner.close();
    }
}

