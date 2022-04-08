class finallyKeyword {

    static void abc(int a) {
        try {
            if (a < 18)
                throw new ArithmeticException("Not eligible to vote.");
            else
                System.out.println("Eligible");
        } finally {
            System.out.println("Exception not occurred\n");
        }
    }

    static void pqr(int a) {
        try {
            if (a < 18)
                throw new ArithmeticException("Not eligible to vote.");
            else
                System.out.println("Eligible");
        } finally {
            System.out.println("Exception occurred but not handelled\n");
        }
    }

    static void xyz(int a) {
        try {
            if (a < 18)
                throw new ArithmeticException("Not eligible to vote.");
            else
                System.out.println("Eligible");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("Exception occurred and handelled\n");
        }
    }

    public static void main(String[] args) {
        abc(20);
        xyz(15);
        pqr(15);
    }
}
