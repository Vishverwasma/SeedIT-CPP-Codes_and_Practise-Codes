//Polymorphism : Runtime : Pointer To Base Class


#include<iostream>
using namespace std;
/*class Parent{
      
};
class Child: public Parent{
     
};*/
class m{
     public:
     void show(){
        cout<<"A";
     }
};
int main(){
    m x;
    m *p;
    p->show();
   
}