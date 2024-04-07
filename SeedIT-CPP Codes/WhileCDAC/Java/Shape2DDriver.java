package Java;

public class Shape2DDriver {
    public static void main(String[] args) {
        Rectangle2d rectangle=new Rectangle2d(1.0,2.0);
        Circle2d circle=new Circle2d(1.0);

        System.out.println("Recatngle Area : ");
        rectangle.displayArea();
        System.out.println("Circle Area : ");
        circle.displayArea();

        System.out.println("Hello");
    }
}
