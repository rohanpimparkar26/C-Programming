import java.util.Scanner;

public class Stdin_and_Stdout_2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        // Read inputs in correct order
        int i = scan.nextInt();
        double d = scan.nextDouble();
        scan.nextLine();  // Consume the leftover newline
        String s = scan.nextLine();

        scan.close();

        // Print outputs
        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}