class Animal {
    public void behaviour() {
        System.out.println("Animal behaviour is executed.");
    }
}

class Dog extends Animal {
    @Override
    public void behaviour() {
        System.out.println("Dog's behaviour is executed.");
    }
}
