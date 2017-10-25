class animal {
    void eating() {
        System.out.println("Eating....");
    }
}

class dog extends animal {
    void barking() {
        System.out.println("Barking....");
    }
}

class singleLevelInheritence {
    public static void main(String[] args) {
        dog d = new dog();
        d.eating();
        d.barking();
    }
}