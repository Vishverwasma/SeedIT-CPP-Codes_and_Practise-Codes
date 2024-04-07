//Inheritance 1

#include<iostream>
using namespace std;
class inh1{
     public:
     void show(){
        cout<<"Hi There !";
     }
};
class inh2:public inh1
{
     public:
     void design(){
        cout<<"Its Me Again :)";
     }
};
int main(){
     inh2 n;
     n.show();
     n.design();
     return 0;     
}