#include<iostream>
using namespace std;
class Student{
     string name;
     public:
     
     
     Student(string n){
         name=n;
     }
     Student(){
         name="Unknown";
     }
     void print(){
        cout<<name<<endl;
     }
};
int main(){
    Student s1("Vishwas");
    Student s2;
    s1.print();
    s2.print();
}