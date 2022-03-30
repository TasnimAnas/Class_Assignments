interface motor {
    int capacity = 100;

    void run();

    void consume();
}

class WatchingMachine implements motor {
    public void run() {
        System.out.println("Value of capacity in run method: " + capacity);
    }

    public void consume() {
        System.out.println("Value of capacity in consume method: " + capacity);
    }
}

class first {
    public static void main(String[] args) {
        WatchingMachine wm = new WatchingMachine();
        wm.run();
        wm.consume();
    }
}