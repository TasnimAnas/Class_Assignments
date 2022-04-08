class q3 {
    static void nested() {
        try {
            int a[] = new int[1];
            String s = "ABC";
            try {
                System.out.println(Integer.valueOf(s));
            } catch (NumberFormatException e) {
                System.out.println(e);
            }
            System.out.println(a[2]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }
    }

    public static void main(String[] args) {
        nested();
    }
}
