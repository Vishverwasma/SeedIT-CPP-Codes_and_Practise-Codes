#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>

using namespace std;

class M{
    int a,b;
    public:
    void input(){
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
    }
    M add(M x2){
        M x3;
        x3.a=a+x2.a;
        x3.b=b+x2.b;
        return x3;
    }
    void add(){
        cout<<" a : "<<a<<" and b : "<<b<<endl;
    }
};
int main(){
    M x1,x2,x3;
    x1.input();
    x2.input();
    x3=x1.add(x2);
    x3.add();
}