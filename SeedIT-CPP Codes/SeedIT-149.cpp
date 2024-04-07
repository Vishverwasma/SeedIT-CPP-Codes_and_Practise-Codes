/*Program showing how Protected is usefull in calling in any variable to another function , but not on main function !!*/
#include<iostream>
using namespace std;
class Protect{
     protected:
     int a;
};
class Reveal:public Protect{
     public:
     void show(){
        a=7;
        cout<<a;
     }
};
int main(){
    Reveal r;
    r.show();
}