#include<iostream>
using namespace std;
class Student{
     int roll;
     string name,branch;
     public:
     void input(){
        cin>>roll>>name>>branch;
     }
     void design(){
        cout<<roll<<"\t"<<name<<"\t"<<branch<<"\t";
     }
};
class marks:public Student{
     float m1,m2,m3;
     public:
     void input1(){
        cin>>m1>>m2>>m3;
     }
     void tot(){
        cout<<m1+m2+m3;
     }
};
int main(){
    marks m;
    m.input();
    m.input1();
    m.design();
    m.tot();
}