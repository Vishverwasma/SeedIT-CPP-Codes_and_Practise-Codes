#include<iostream>
using namespace std;
struct daata{
    private:
    int a,b;
    public:
    void inp(){
        cin>>a>>b;
    }
    void sum(){
        cout<<"Sum is : "<<a+b;
    }
};
int main(){
    daata d;
    d.inp();
    d.sum();
}