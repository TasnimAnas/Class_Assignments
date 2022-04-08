class q4 {

    static void multiple() {
        try {
            Object a = null;
            a.hashCode();
            System.out.println(1 / 0);
            int arr[] = new int[1];
            System.out.println(arr[2]);
            System.out.println(Integer.valueOf("abc"));
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception");
        } catch (NullPointerException e) {
            System.out.println("Null Exception");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array out of bound exception");
        } catch (NumberFormatException e) {
            System.out.println("Number format exception");
        } catch (Exception e) {
            System.out.println("Exception");
        }
    }

    public static void main(String[] args) {
        multiple();
    }
}
