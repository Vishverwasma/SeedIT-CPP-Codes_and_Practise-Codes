//Polymorphism : Runtime : Function Overriding
#include<iostream>
using namespace std;

/*
Function Overriding :
A Phenomenon where a base class and its child class have 
any function of same data type , same name and same argument
while both parent class and child class are bounded by
Inheritance and have exact same return type !
In Other Words except for their different class names they
(parent and child) class should be compelete dicto/xerox copy of each other !
*/

class parent {
     public:
     virtual void show(){
        cout<<"Hello World ! ";
     }
};
class child:public parent{
    public:
     void show(){
        cout<<"Bye Bye World ! ";
     }
};
main(){
    child x;
    parent *p;
    p=&x;
    p->show();
}
/*
Here in Parent we Placed a word : "virtual" : before "void show" ,
it is done i=in order to enable our pointer to access the show function
of inheriting child class while they both have "function overriding ! "
*/