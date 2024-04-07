#include<iostream>
using namespace std;
void great(int a,int b, int c){
    if(a>b && a>c){
        cout<<a;
    }
    else if(b>a && b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }
}
int main(){
    int a,b,c;
    cout<<"Three numbers Are :";
    cin>>a>>b>>c;
    cout<<"Greatest Number Is :";
    great(a,b,c);
    return 0;
}