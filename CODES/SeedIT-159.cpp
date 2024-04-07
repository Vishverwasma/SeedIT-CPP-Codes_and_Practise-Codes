#include<iostream>
using namespace std;
class Rectangle{
     int len,bre,area;
     public:
     Rectangle(){
        len=0;
        bre=0;        
     }
     Rectangle(int l , int b){
        len=l;
        bre=b;
    }
    Rectangle(int l){
         len=l;
         bre=l;
    }
    void print(){
        area=len*bre;
        cout<<area<<endl;
    }
};
int main(){
    Rectangle r;
    r.print();
    cout<<"Two Parameters are : ";
    int a,b;
    cin>>a>>b;
    Rectangle r1(a,b);
    r1.print();
    int c;
    cout<<endl<<"Single Parameter is : ";
    cin>>c;
    Rectangle r2(c);
    r2.print();
}