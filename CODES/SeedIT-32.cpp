#include<iostream>
using namespace std;
int main(){
    int a,b,rev,n,s=0;
    cout<<"Number is :";
    cin>>a;
    n=a;
    while(n!=0){
        b=n%10;
        s=s*10+b;
        n=n/10;
    }
    rev=s;
    cout<< "Reverse of "<< a<<" is "<<rev;
    return 0;
}