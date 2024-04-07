#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Number : ";
    cin>>n;
    int z=n;
    while(n!=0){
        a=n%10;
        n=n/10;
    }
    int sum =a +(z%10);
    cout<<"Sum is "<<sum<<endl;
    return 0;
}