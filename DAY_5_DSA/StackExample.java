import java.util.Scanner;

class StackExample {
    static final int maxsz = 10;
    static int[] stack = new int[maxsz];
    static int top = -1;  // Fixed missing variable

    // Push method
    static void push(int element) {
        if (top == maxsz - 1) {
            System.out.println("Stack is full (Overflow)");
        } else {
            stack[++top] = element;
            System.out.println("Inserted: " + element);
        }
    }

    // Pop method
    static void pop() {
        if (top == -1) {
            System.out.println("Stack is empty (Underflow)");
        } else {
            System.out.println("Deleted: " + stack[top--]);
        }
    }

    // Print method
    static void print() {
        if (top == -1) {
            System.out.println("Stack is empty");
        } else {
            System.out.print("Stack elements: ");
            for (int i = 0; i <= top; i++) {
                System.out.print(stack[i] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {  // Fixed 'static' spelling
        Scanner s1 = new Scanner(System.in);  // Fixed Scanner initialization
        int choice;

        do {
            System.out.println("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
            System.out.print("Enter your choice: ");
            choice = s1.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter element to insert: ");
                    int element = s1.nextInt();
                    push(element);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    print();
                    break;
                case 4:
                    System.out.println("Code is terminated");
                    break;
                default:
                    System.out.println("Invalid Choice!");
            }
        } while (choice != 4);

        s1.close();  // Closing scanner
    }
}
