#include<iostream>
using namespace std;


/*
A class Tha contains a pure virtual Function that has a value equals 0
are called abstract class , for example class data below has a pure virtual function
that is "virtual void calc()=0" and so is abstract class /!! 
*/



class Data{ 
    protected:
    int a,b;
    public:
    void input(){
        cin>>a>>b;
    }
    virtual void calc()=0;
};
class Dam:public Data{
     public:
     void calc(){
         cout<<a*b<<endl;
     }
};
int main(){
    Dam x;
    Data *p;
    p=&x;
    p->input();
    p->calc();
}