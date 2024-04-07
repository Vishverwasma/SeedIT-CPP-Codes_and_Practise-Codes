#include<iostream>
using namespace std;
int main(){
    int a,b,swap;
    cout<<" a: ";
    cin>>a;
    cout<<endl<<" b : ";
    cin>>b;
    swap=a;
    a=b;
    b=swap;
    cout<<" a= "<<a<<" b: "<< b<<endl;
    return 0;
}