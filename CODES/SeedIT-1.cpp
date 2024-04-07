#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e,f;
cout<<"5 digit number : ";
cin>>a;
b=a%10;
a=a/10;
cout<<b<<endl;
c=a%10;
a=a/10;
cout<<c<<endl;
d=a%10;
a=a/10;
cout<<d<<endl;
e=a%10;
a=a/10;
cout<<e<<endl;
f=a%10;
a=a/10;
cout<<f<<endl;
return 0;
}