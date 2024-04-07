#include<iostream>
using namespace std;
int main(){
    int a=1,b;
    cout<<"Number is : ";
    cin>>b;
    while(a<=b){
        cout<<"Even : ";
        if(a%2==0){
            cout<<a;
            cout<<endl;
        }
        
        a++;
    }    
    return 0;
}