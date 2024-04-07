#include<iostream>
using namespace std;
void pelendrome(){
    int a,b,d,c=0;
    cout<<"Number :";
    cin>>a;
    d=a;
    while(a!=0){
        b=a%10;
        c=10*c+b;
        a=a/10;
        }
        if(c==d){
            cout<<"Number is pelendrome";
        }
        else{
            cout<<"Number is not pelendrome";
        }
}
int main(){
    pelendrome();
    return 0;
}