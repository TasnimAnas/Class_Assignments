import p1.*;
import p2.*;

class p3 {
    public static void main(String[] args) {
        p1.employee object1 = new p1.employee();
        regularEmployee object2 = new regularEmployee();
        p2.employee object3 = new p2.employee();
        contractEmployee object4 = new contractEmployee();

        object1.print();
        object2.print();
        object3.print();
        object4.print();
    }
}