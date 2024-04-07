#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"The four Digit number :";
    // cin>>a;
    // b=a%10;
    // a=a/10;
    // a=a/10;
    // a=a/10;
    // c=a%10;
    cin>>c;
    a=c%10;
    while(c!=0){
        b=c%10;
        c=c/10;
    }
    cout<<"Sum of first and last digit is :"<<b+a;
    return 0;
}