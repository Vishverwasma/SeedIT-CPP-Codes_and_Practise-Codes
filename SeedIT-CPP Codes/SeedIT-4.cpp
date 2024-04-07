#include<iostream>
using namespace std;
int main(){
    int amt ,a,b,c,d,e,f,g;
    cout<<"Amount : ";
    cin>>amt;
    a=amt/500;
    amt=amt%500;
    b=amt/200;
    amt=amt%200;
    c=amt/100;
    amt=amt%100;
    d=amt/50;
    amt=amt%50;
    e=amt/20;
    amt=amt%20;
    f=amt/10;
    amt=amt%10;
    g=amt/5;

    cout<<"500 : "<< a<<endl;
    cout<<"200 : "<< b<<endl;
    cout<<"100 : "<< c<<endl;
    cout<<"50 : "<< d<<endl;
    cout<<"20 : "<< e<<endl;
    cout<<"10 : "<< f<<endl;
    cout<<"5 : "<< g<<endl;
    cout<<"Total Notes : "<< a+b+c+d+e+f+g <<endl;
    return 0;
}