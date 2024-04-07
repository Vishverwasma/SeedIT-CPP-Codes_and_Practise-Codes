#include<iostream>
using namespace std;
class Data{
     int a;
     public:
     Data(int x){
        a=x;
     }
     Data Compare(Data d2){
        if(d2.a>a){
            return d2;
        }
        else{
            return *this;
        }
     }
     void display(){
        cout<<a;
     }
};
int main(){
    
    int n3,n4,n5;
    cin>>n3>>n4;
     Data d1(n3),d2(n4),d3(n5);
     d3=d1.Compare(d2);
     d3.display();
}