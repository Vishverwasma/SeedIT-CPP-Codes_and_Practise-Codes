#include<iostream>
using namespace std;
class Student{
     string name;
     int rn;
     public:
     void input(){
        cout<<"Name : ";
        cin>>name;
        cout<<endl<<"Roll Number : ";
        cin>>rn;
     }
     void output(){
        cout<<endl<<name<<" "<<rn;
     }
};
int main(){
    Student s;
    s.input();
    s.output();
    return 0;
}