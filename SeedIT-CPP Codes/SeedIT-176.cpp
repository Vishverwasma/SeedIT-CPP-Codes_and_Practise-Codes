#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>
using namespace std;

class UO{
    int a,b;
     public:
    void input(){
        cout<<"A : ";
        cin>>a;
        cout<<endl<<"B : ";
        cin>>b;
        cout<<endl;
    }
     void operator-(){
        a=-a;
        b=-b;
     }
     void output(){
        cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
     }
};

int main(){
     UO l1,l2;
     l1.input();
     -l1;
     l1.output();
     
     l2.input();
     -l2;
     l2.output();
}