class q2 {
    static void arithmetic() {
        try {
            System.out.println(1 / 0);
        } catch (ArithmeticException e) {
            System.out.println(e);
        }
    }

    static void nullPtr() {
        try {
            Object a = null;
            a.hashCode();
        } catch (NullPointerException e) {
            System.out.println(e);
        }
    }

    static void arrayOutOfBound() {
        int a[] = new int[1];
        try {
            System.out.println(a[2]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }
    }

    static void numberFormat() {
        String s = "ABC";
        try {
            System.out.println(Integer.valueOf(s));
        } catch (NumberFormatException e) {
            System.out.println(e);
        }
    }

    public static void main(String[] args) {
        arithmetic();
        nullPtr();
        arrayOutOfBound();
        numberFormat();

    }
}
