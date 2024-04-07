#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,sum;
    cout<<" Your 5 digit number : ";
    cin>>a;
    b=a%10;
    b=b+1;
    a=a/10;
    c=a%10;
    c=c+1;
    a=a/10;
    d=a%10;
    d=d+1;
    a=a/10;
    e=a%10;
    e=e+1;
    a=a/10;
    f=a%10;
    f=f+1;
    sum=f*10000+e*1000+d*100+c*10+b;
   
    cout<<sum<<endl;
    return 0;
}