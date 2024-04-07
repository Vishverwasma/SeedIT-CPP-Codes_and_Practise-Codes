#include<bits/stdc++.h>
/* ^^ This makes it so that user doesnt have to include the other librabries!!^^ */
#include<sstream>
#include<iostream>
#include<vector>

using namespace std;

class Polymorphism1{
     public:
     void area(int a){
        float x;
        x=3.14*a*a;
        cout<<"Area Of Circle Is : "<<x<<endl;
     }
     void area(int l,int b){
        float a;
        a=l*b;
        cout<<"Area Of Rectangle : "<<a<<endl;
     }
     void area(float b,float h){
        float a;
        a=0.5*b*h;
        cout<<"Area Of Triangle : "<<a<<endl;
     }
};

int main(){
     Polymorphism1 p;
     int rad,length,bred;
     float base,height;
     cout<<"Radius Of Circle : ";cin>>rad;
     cout<<endl<<"Length Of Rectangle : ";cin>>length;
     cout<<endl<<"Bredth Of Rectangle : ";cin>>bred;
     cout<<endl<<"Base Of Triangle : ";cin>>base;
     cout<<endl<<"Height Of Triangle : ";cin>>height;
     p.area(rad);
     p.area(length,bred);
     p.area(base,height);
}