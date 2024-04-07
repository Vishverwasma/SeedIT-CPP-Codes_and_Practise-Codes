#include<iostream>
using namespace std;
int main(){
    int a,sum=0,prod=1,size=0;;
    cout<<"Enter your number :";
    cin>>a;
    int i;
    for( i=1;i<=a/2;i++){
    if(a%i==0){
        sum=sum+i;
        prod=prod*i;
        size=size+1;
        cout<<i<<endl;
    }
    }   
     cout<<"SUM is "<<sum<<endl;
     cout<<"Product is "<<prod<<endl;
     cout<<"Total number of divisors :"<<size<<endl;
     
     if(a==sum){
        cout<<"This is a perfect number";
     }
     else if(a!=sum){
        cout<<"This is not a perfect number";
     }
      return 0;
}