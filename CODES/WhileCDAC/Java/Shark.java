package Java;

public class Shark extends Fish{
    private int length;
    public Shark(String name,int length){
        super(name);
        this.length=length;
    }
     public void greetings(){
        System.out.println("Hi I can Bite You !");
    }
    public void bite(){
        System.out.println("Bite");
    }
}
