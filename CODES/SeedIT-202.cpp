//Polymorphism : Runtime : Pointer To Class
#include<iostream>
using namespace std;
class parent{
     public:
     void show(){
        cout<<"xyz";
     }
};
class child:public parent{
     public:
     void display(){
        cout<<"zyx";
     }
};
int main(){
     child x;
     parent *p;
     p=&x;
     p->show();
     // p->display();   
   /* If enabled , will show error 
   cause display is a part of child class whereas pointer are always 
   used for Base Class and not for other child classes ! */

}