#include<iostream>
using namespace std;
int main(){
    int a,sum=0,prod=1,c=0;
    cout<<"Number: ";
    cin>>a;
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            sum=sum+i;
            c=c+1;
            cout<<i<<endl;
        }
    }
    for(int i=1;i<=sum;i++){
     prod=prod*i;
    }  
    cout<<"Sum is : "<<sum <<" and factorial is :"<<prod<<" And number of divisors are :"<<c<<endl;
    
      return 0;
}