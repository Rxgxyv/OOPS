
public class main {
    public static void main(String[] args) {
        Animal a = new Animal();  // Parent class reference to parent class object
        Animal a1 = new Dog();    // Parent class reference to child class object
        Dog d = new Dog();        // Child class reference to child class object
        // The following would give an error because a child reference cannot refer to a parent object
        // Dog d1 = new Animal(); 
        
        a.behaviour();   // Calls Animal's behaviour
        a1.behaviour();  // Calls Dog's behaviour due to runtime polymorphism
        d.behaviour();   // Calls Dog's behaviour
    }
}
