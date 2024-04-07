#include<iostream>
using namespace std;
template<class T>
class Math{
     T a,b;
     public:
     void input(){
        cout<<"Your Inputs : ";
        cin>>a>>b;
     }
     void add(){
        T c;
        c=a+b;
        cout<<"Output : "<<c<<endl;
     }
};
int main(){
    Math<int> x1;
    Math<float> x2;
    x1.input();
    x1.add();
    x2.input();
    x2.add();
}