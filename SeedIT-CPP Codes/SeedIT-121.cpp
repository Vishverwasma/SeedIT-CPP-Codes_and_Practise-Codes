#include<iostream>
using namespace std;
struct demo{
      int a,b;
};
int main(){
    demo d1,d2,d3,d4;
    cout<<"Input For D1 :";
    cin>>d1.a>>d1.b;
    cout<<"Input For D2 :";
    cin>>d2.a>>d2.b;
    d3.a=d1.a+d2.a;
    d3.b=d1.b+d2.b;
    d4.a=d1.a*d2.a;
    d4.b=d1.b*d2.b;
    cout<<d3.a<<" "<<d3.b<<endl;
    cout<<d4.a<<" "<<d4.b;
}