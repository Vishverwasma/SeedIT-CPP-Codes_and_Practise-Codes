#include<iostream>
using namespace std;
class Employee{
     int id;
     public:
     char *ename[30];
     char *dept[20];
     float salary;

     Employee(){
         cout<<"\nDefault Constructor Is cALLED ! ";
         id=0;
         salary=0;
         *ename=NULL;
         *dept=NULL;
    }
    Employee(char &n,char &d,int di,float sal){
         cout<<"\nParameterized Constructor Is cALLED ! ";
         id=di;
         salary=sal;
         *ename=&n;
         *dept=&d;
    }
    ~Employee(){
        delete []ename;
        delete []dept;
    }
    void display(){
        cout<<"The Employee : "<<*ename<<" of department : "<<*dept<<" with id : "<<id<<" has salary : "<<(float)salary<<endl;
    }
};
int main(){
    char nam[30],dep[20];
    int id,i;
    float s;

    cout<<"\n Input Format : \nName \nDepartment \nID \nSalary \n" ;
    cin>>nam>>dep>>id>>s;
    
    Employee e(*nam,*dep,id,s);
    e.display();

    cout<<"\n Input Format : \nName \nDepartment \nID \nSalary \n" ;
    cin>>nam>>dep>>id>>s;
    
    Employee e1(*nam,*dep,id,s);
    e1.display();

    // cout<<"\n Input Format : \nName \nDepartment \nID \nSalary \n" ;
    // cin>>nam>>dep>>id>>s;
    
    // Employee e2(*nam,*dep,id,s);
    // e2.display();

    // cout<<"\n Input Format : \nName \nDepartment \nID \nSalary \n" ;
    // cin>>nam>>dep>>id>>s;
    
    // Employee e3(*nam,*dep,id,s);
    // e3.display();

    return 0;

}