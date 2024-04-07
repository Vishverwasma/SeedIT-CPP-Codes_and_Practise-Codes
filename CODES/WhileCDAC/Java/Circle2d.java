package Java;

public class Circle2d extends Shape2d{
    public double radius;

    public Circle2d(double radius){
        this.radius=radius;
    }
    
    @Override public double get2dArea(){
        return Math.PI*radius*radius;
    }
}
