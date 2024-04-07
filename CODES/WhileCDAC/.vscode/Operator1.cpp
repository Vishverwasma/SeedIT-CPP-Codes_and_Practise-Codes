#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base{
    int i;
    public:
    base(){
        cout<<"\nDefault Constructor ! ";
        i=0;
    }
    base(int a){
        cout<<"base Parameterized Constructor ! ";
        i=a;
    }
    void display(){
        cout<<"\n i = "<<i;
    }
    int get_i(){
        return i;
    }
    ~base(){
        cout<<"\nbase Destructor ! ";
    }
};
class derived:public base{
     int j;
     public:
     derived(){
        cout<<"\nderived default destructor ! ";
        j=0;
     }
     derived(int b){
        cout<<"\nderived Parameterize Constructor ! ";
        j=b;
     }
     derived(int a,int b):base(a){
        cout<<"\nDerived 2 param constructor ";
        j=b;
     }
     void display_j(){
        cout<<"\n i : "<<get_i()<<" j = "<<j;
     }
     ~derived(){
        cout<<"\nDerived Destructor !";
     }
};
int main(){
    derived o(2,4);
    o.display();
    o.display_j();
    return 0;
}