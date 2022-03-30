package another;

import bio.*;

public class student implements schooling, college {
    public void printSchooling() {
        System.out.println("Student interface");
    }

    public void printCollege() {
        System.out.println("College interface");
    }
}
