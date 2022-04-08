public class q5 {
    public static void main(String[] args) {
        try {
            xyz x = new xyz();
        } catch (NullPointerException e) {
            System.out.println("Derive-exception");
        } catch (ArithmeticException e) {
            System.out.println("Base-exception");
        }

    }
}

class XYZ {
    XYZ() throws ArithmeticException {
        System.out.println("Base");
        // throw new ArithmeticException();

    }
}

class xyz extends XYZ {
    xyz() throws NullPointerException {
        System.out.println("Derive");
        throw new NullPointerException();

    }
}