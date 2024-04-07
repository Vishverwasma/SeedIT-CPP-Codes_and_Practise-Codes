#include<iostream>
using namespace std;
int Fact(int m){
    int n,p=1;
    for(n=1;n<=m;n++){
        p=p*n;
    }
    return p;
}
int main(){
    int a;
    cout<<"Number is :";
    cin>>a;
    cout<<"Factorial is :"<< Fact(a);
    return 0;
}