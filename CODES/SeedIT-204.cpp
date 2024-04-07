//Early Binding - 

#include<iostream>
using namespace std;
class shape{
     protected:
     int a;
     public:
     void input(){
        cin>>a;
     }
     virtual void calculate(){}
};
/*
We made default virtual fucntion here
such that none of the rule are enraged of...
pointer only calling function from parent calss , and 
making it so that , pointers are made to call
function form child classes due to function overriding
*/
class circle:public shape{
     public:
     void calculate(){
        cout<<3.14*a*a<<endl;
     }
};
class square:public shape{
     public:
     void calculate(){
        cout<<a*a<<endl;
     }
};
int main(){
    shape sh;
    shape *p;
    circle c;
    p=&c;
    p->input();
    p->calculate();
    square s;
    p=&s;
    p->input();
    p->calculate();
}