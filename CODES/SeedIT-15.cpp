#include<iostream>
using namespace std;
int main(){
    int a,b,sum=0;
    cout<<" Your 5 digit number : ";
    cin>>a;
   while(a!=0){
    b=a%10;
    sum=sum*10+b;
    a=a/10;
   }
    cout<<sum<<endl;
    return 0;
}