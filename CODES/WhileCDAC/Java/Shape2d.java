package Java;
import java.text.*;
public abstract class Shape2d {
    public abstract double get2dArea();
    public void displayArea(){
        DecimalFormat decimalFormat=new DecimalFormat("#.0");
        double area=get2dArea();
        System.out.println("Area : "+decimalFormat.format(area));
    }
}
