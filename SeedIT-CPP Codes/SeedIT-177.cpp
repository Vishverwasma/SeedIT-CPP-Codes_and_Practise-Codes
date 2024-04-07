#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>
using namespace std;

class Data{
     int a,b;
     public:
     void input(){
        cout<<" a Is ...";
        cin>>a;
        cout<<endl<<" b is ...";
        cin>>b;
        cout<<endl;
     }
     void operator++(){
        ++a;
        ++b;
     }
     void display(){
        cout<<"a is "<<a<<" and b is "<<b<<endl;
     }
};

int main(){
     Data d1,d2;
     d1.input();
     ++d1;
     d1.display();
     d2.input();
     ++d2;
     d2.display();
}