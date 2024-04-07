package Java;

public class FishMain {
    public static void main(String[] args) {
        Fish f1=new Fish("Generic Fish");
        Fish f2=new Shark("Magladon",6);

        f1.greetings();
        f2.greetings();

        Shark s1=new Shark("Shark",5);
        s1.bite();
    }    
}
