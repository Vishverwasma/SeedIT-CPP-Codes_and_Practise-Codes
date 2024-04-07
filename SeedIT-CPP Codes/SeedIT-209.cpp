#include<iostream>
#include<bits/stdc++.h>
using  namespace std;

class Data{
     int a,b;
     public:
     Data();
     Data(int x,int y);
     void add(Data d2);
};
Data::Data(){}
Data::Data(int x,int y){
    a=x;
    b=y;
}
void Data::add(Data d2){
    Data d3;
    d3.a=a+d2.a;
    d3.b=b+d2.b;
    cout<<endl<<d3.a<<" - "<<d3.b;
}
main(){
    int m,n,o,p;
    cout<<":";
    cin>>m;
    cout<<":";
    cin>>n;
    cout<<":";
    cin>>o;
    cout<<":";
    cin>>p;
    
    Data d1(m,n),d2(o,p);
    d1.add(d2);
}