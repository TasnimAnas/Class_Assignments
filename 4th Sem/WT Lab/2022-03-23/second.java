import java.util.Scanner;

interface XYZ {
    void earnings();

    void deduction();

    void bonus();
}

abstract class Manager implements XYZ {
    double salary;
    double bonus;
    double deduct;

    public void earnings() {
        Scanner cin = new Scanner(System.in);
        System.out.print("Enter salary: ");
        salary = cin.nextInt();
        cin.close();
    }

    public void deduction() {
        deduct = 0.12 * salary;
        System.out.println("Deducted: " + deduct);
    }

    public abstract void bonus();
}

class Substaff extends Manager {
    public void bonus() {
        bonus = salary + (0.8 * salary) + (0.15 * salary);
        System.out.println("Bonus: " + bonus);
    }
}

class second {
    public static void main(String[] args) {
        Substaff st = new Substaff();
        st.earnings();
        st.bonus();
        st.deduction();
    }
}