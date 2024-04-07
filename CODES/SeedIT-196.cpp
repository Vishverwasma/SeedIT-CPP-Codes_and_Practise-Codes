#include<iostream>
using namespace std;
class M{
     int a ,b;
     public:
     M(int a,int b){
        this->a=a;
        this->b=b;
     }
     void display(){
        cout<<a<<" "<<b;
     }
};

class student{
     string name,branch;
     int roll,sem;
     float mark;
     public:
     student(string name,string branch, int roll,int sem, float mark){
        this->name=name;
        this->branch=branch;
        this->roll=roll;
        this->sem=sem;
        this->mark=mark;
     }
     void display(){
        cout<<name<<" "<<branch<<" "<<roll<<" "<<sem<<" "<<mark<<endl;
     }
};
class Calcii{
     int a,b;
     public:
     Calcii(int a,int b){
        this-> a=a;
        this-> b=b;
     }
     void Add(){
        cout<<a+b<<endl;
     }
     void Mul(){
        cout<<a*b<<endl;
     }
     void Sub(){
        cout<<a-b<<endl;
     }
     void Div(){
        cout<<a/b<<endl;
     }
};


int main(){

    //this-> POINTER


    //1st
    M hi(4,5);
    hi.display();


    //2nd
    string nm,br;
    int rl,sm;
    float mrk;
    cout<<endl<<"Name : ";
    cin>>nm;
    cout<<endl<<"Branch : ";
    cin>>br;
    cout<<endl<<"Roll Number : ";
    cin>>rl;
    cout<<endl<<"Semester In Numbers : ";
    cin>>sm;
    cout<<endl<<"Marks : ";
    cin>>mrk;
    student st(nm,br,rl,sm,mrk);
    st.display();


    
    //3rd
    int n1,n2;
    cout<<endl<<"Number 1 : ";
    cin>>n1;
    cout<<endl<<"Number 2 : ";
    cin>>n2;
    int x,y;
    if(n1>n2){
        x=n1;
        y=n2; 
    }
    else{
        x=n2;
        y=n1;
    }
    Calcii c(x,y);
    c.Add();
    c.Mul();
    c.Sub();
    c.Div();


    //4th
}