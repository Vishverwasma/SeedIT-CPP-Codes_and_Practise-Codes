package Java;

import java.util.*;
import java.io.*;

public class Fish{
    String name;
    public Fish(String name){
        this.name=name;
    }
    public void greetings(){
        System.out.println("I am Fish");
    }
    public String getName(){
       return name;
    }
}