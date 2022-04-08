import java.util.Scanner;

class tryCatchException {

    static void abc(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            try {
                if (arr[i] < 0)
                    throw new ArithmeticException("Negative number exception");
                else
                    System.out.println(arr[i] + " ");
            } catch (ArithmeticException e) {
                System.out.println(e.getMessage());
            }
        }
    }

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.print("Enter array size: ");
        int n = cin.nextInt();
        int arr[] = new int[n];
        System.out.print("Enter " + n + " values: ");
        for (int i = 0; i < n; i++)
            arr[i] = cin.nextInt();

        abc(arr, n);
        cin.close();
    }
}