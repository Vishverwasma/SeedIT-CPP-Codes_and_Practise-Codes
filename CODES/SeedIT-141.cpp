#include<iostream>
using namespace std;
class Data{
     int a,b;
     public:
     void input(){
        cout<<"a : ";
        cin>>a;
        cout<<"b : ";
        cin>>b;
     }
     void add(Data d2){
        Data d3;
        d3.a=a+d2.b;
        d3.b=b+d2.b;
        cout<<"Answer : "<<d3.a<<" "<<endl<<" "<<d3.b<<endl;
     }
     void sub(Data d2){
        Data d4;
        d4.a=a-d2.b;
        d4.b=b-d2.b;
        cout<<"Answer : "<<d4.a<<" "<<endl<<" "<<d4.b<<endl;
     }
     void mul(Data d2){
        Data d5;
        d5.a=a*d2.b;
        d5.b=b*d2.b;
        cout<<"Answer : "<<d5.a<<" "<<endl<<" "<<d5.b<<endl;
     }
};
int main(){
     Data d1,d2;
     d1.input();
     d2.input();
     d1.add(d2);
     d1.sub(d2);
     d1.mul(d2);
}