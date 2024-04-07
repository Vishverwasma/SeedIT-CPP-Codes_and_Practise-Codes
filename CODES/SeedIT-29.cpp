#include<iostream>
using namespace std;
int main(){
    int a,sum=0,i;
    cout<<"Enter your number :";
    cin>>a;
    for(i=1;i<a;i++){
        if(a%i==0 && i!=1 && i!=a){
            cout<<"Number is not Prime !"<<endl;
        }
        else if(a%1==0 && a%a==0 && a%i!=0){
            cout<<"Number is Prime"<<endl;
        }
    }
      return 0;
}