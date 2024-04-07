package Java;

public class Rectangle2d extends Shape2d{
    public double length;
    public double width;
    public Rectangle2d(double length,double width){
        this.length=length;
        this.width=width;
    }
    @Override public double get2dArea(){
        return length*width;
    }
}
