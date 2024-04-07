#include<iostream>
using namespace std;
int main(){
    int amt,c,d,e,f,g;
    cout<<"Amount : ";
    cin>>amt;
    
    c=amt/100;
    amt=amt%100;
    d=amt/50;
    amt=amt%50;
    e=amt/20;
    amt=amt%20;
    f=amt/10;
    amt=amt%10;
    g=amt/5;

   
    cout<<"100 : "<< c<<endl;
    cout<<"50 : "<< d<<endl;
    cout<<"20 : "<< e<<endl;
    cout<<"10 : "<< f<<endl;
    cout<<"5 : "<< g<<endl;
    cout<<"Total Notes : "<< c+d+e+f+g <<endl;
    return 0;
}