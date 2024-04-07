#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,z,sum1,sum;
    cout<<" Your 5 digit number : ";
    cin>>a;
    z=a;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    e=a%10;
    a=a/10;
    f=a%10;
    sum1=b*10000+c*1000+d*100+e*10+f;
    sum=sum1+z;
    cout<<sum<<endl;
    return 0;
}