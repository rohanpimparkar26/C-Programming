import java.util.Scanner;

public class Multiplication_Table {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
       
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        
        for (int i = 1; i <= 10; i++) 
        {
            System.out.println(n1 + " x " + i + " = " + (n1 * i));
        }
        for (int j = 1; j <= 10; j++)
        {
            System.out.println(n2 + " x " + j + " = " + (n2 * j));
        }
        

        sc.close(); // Closing scanner
    }
}