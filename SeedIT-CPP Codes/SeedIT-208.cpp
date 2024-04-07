#include<iostream>
#include<bits/stdc++.h>
using  namespace std;

class Data{
     int a,b;
     public:
     void input();
     void add(Data d2);
};
void Data::input(){
    cout<<"Number 1 : ";
    cin>>a;
    cout<<endl<<"Number 2 : ";
    cin>>b;
}
void Data::add(Data d2){
    Data d3;
    d3.a=a+d2.a;
    d3.b=b+d2.b;
    cout<<endl<<d3.a<<" - "<<d3.b<<endl;
}


main(){
    Data d1,d2;
    d1.input();
    d2.input();
    d1.add(d2);
}
