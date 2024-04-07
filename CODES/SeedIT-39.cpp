#include<iostream>
using namespace std;
void factorial(){
    int a=1,b,c=1;
    cout<<"Limit :";
    cin>>b;
    while(a<=b){
        c=c*a;
        a++;
    }
    cout<<"Factorial :"<<c;
    
}

int main(){
    cout<<"Factorial :";
    factorial();
    cout<<endl;
}