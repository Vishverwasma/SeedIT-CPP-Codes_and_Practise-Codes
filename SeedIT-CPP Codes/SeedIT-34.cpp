#include<iostream>
using namespace std;
int main(){
    int a,b,r,p=0,n,s=0;
    cout<<"Number is :";
    cin>>a;
   b=a;
   while(b!=0){
    n=b%10;
    b=b/10;
    s=s+n;
   }
   int q=s;
   while(s!=0){
    r=s%10;
    p=p*10+r;
    s=s/10;
   }
   if(p*q==a){
    cout<<"This is a Magic Number!"<<endl;
   }
   else{
    cout<<"This is not a magic number!";
   }
    return 0;
}