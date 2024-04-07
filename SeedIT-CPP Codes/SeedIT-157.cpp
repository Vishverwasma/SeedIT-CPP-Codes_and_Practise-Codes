/*Costructor Based Questions : 
where:
   * Canstructor Name should be same as class Name!
   * Parameters in Constructors can not be of same data type or same number of data type!
   * When in Main fuction an object is designed , they are auto called , and are not needed to be called using any mean , except specifying them with object !
   * They Dont Have Return Type : For That We Need To Create New Fuction Inside same Class Body !
*/
#include<iostream>
using namespace std;
class Data{
     public:
     Data(){
        cout<<"Constructor Question 01 !"<<endl;
     }
};
class Data1{
     public:
     Data1(){
        cout<<"Default !"<<endl;
     }
     Data1(int  a, int b){
        cout<<a<<"-"<<b<<endl;
     }
     Data1(float a){
        cout<<a<<endl;
     }
     Data1(char a){
        cout<<a<<endl;
     }
};
class Data2{
    int a;
     public:
     Data2(){
        a=7;
     }
     void display(){
        cout<<a<<endl;
     }
};
class Data3{
    int a,b;
     public:
     Data3(){
        a=4;
        b=0;
     }
     Data3(int x,int y){
       a=x;
       b=y;
     }
     void adddisplay(){
        int c=a+b;
        cout<<a<<"+"<<b<<"="<<c<<endl;
     }
};
class Student{
     int roll;
     string name;
     float marks;
     public:
     Student(){
        roll=0;
        name="Name";
        marks=100;
     }
     Student(int r, string nm,float mrks){
        roll=r;
        name=nm;
        marks=mrks;
     }
     void compare(Student S2,Student S3){
        if(marks>S2.marks && marks>S3.marks){
            cout<<roll<<"\t"<<name<<"\t"<<marks<<"\t"<<endl;
        }
        else if(S2.marks>marks && S2.marks>S3.marks){
            cout<<S2.roll<<"\t"<<S2.name<<"\t"<<S2.marks<<"\t"<<endl;
        }
        else if(S3.marks>marks && S3.marks>marks){
            cout<<S3.roll<<"\t"<<S3.name<<"\t"<<S3.marks<<"\t"<<endl;
        }
     }
};
class Data4{
     int a,b,suma=0,sumb=0;
     public:
     Data4(){}
     Data4(int x,int y){
        a=x;
        b=y;
     }
     void add(Data4 d11){
         suma=a+d11.a;
         sumb=b+d11.b;
         cout<<"Sum of a's : "<<suma<<" and Sum of b's : "<<sumb<<endl;
        }
};
class Data5{
     int m,cm,msum,cmsum;
     public:
     Data5(){}
     Data5(int x,int y){
        m=x;
        cm=y;
     }
     void add(Data5 d13){
       int d,e;
       msum=m+d13.m;
       cmsum=cm+d13.cm;
       if(cmsum>=100){
        d=cmsum%100;
        e=cmsum/100;
        msum=msum+e;
        cmsum=d;
       }
       else{
        msum=msum;
        cmsum=cmsum;
       }
       cout<<"Adding this two Input "<<m<<"meter , "<<cm<<" centimeter and "<<d13.m<<" meter , "<<d13.cm <<" centimeter , Gives Us : "<<msum<<" meters - "<<cmsum<<" centimeters ! ";
     }
     
};


int main(){
    Data d1,d2,d3;
   //-------------
    Data1 d4(3,9);
    Data1 d5(3.14f);
    Data1 d6('V');
    //------------
    Data2 d7;
    d7.display();
    //------------
    Data3 d8;
    Data3 d9(5,6);
    d8.adddisplay();
    d9.adddisplay();
    //------------
    Student S1(01,"StudentA",98);
    Student S2(02,"StudentG",96);
    Student S3(03,"StudentV",88);
    S1.compare(S2,S3);
    //------------
    //Data4 d10();
    Data4 d10(5,6);
    Data4 d11(9,2);
    d10.add(d11);
    //-------------
    int a,b,c,d;
    cout<<"First Meter : ";cin>>a;
    cout<<endl<<"First Centimeter : ";cin>>b;
    cout<<endl<<"Second Meter : ";cin>>c;
    cout<<endl<<"Second Centimeter : ";cin>>d;
    Data5 d12(a,b);
    Data5 d13(c,d);
    d12.add(d13);
    //-------------
    
    //-------------
}