#include<iostream>
using namespace std;
int main(){
    int a,i,c=0;
cout<<"Number:";
cin>>a;
for(i=1;i<a/2;i++){
    if(a%i==0){
        c=c+1;
    
    }
}
if(c>1){
        cout<<"This is Not a prime Number";
    }
    else{
        cout<<"This is a Prime Number";
    }
cout<<endl;
cout<<"Number of dicisors are : "<<c<<endl;
return 0;
}
