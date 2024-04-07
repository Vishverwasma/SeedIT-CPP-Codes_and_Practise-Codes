#include<iostream>
using namespace std;
int main(){
    int t,p,c1,c2;
    cout<<"Total selling price of 15 items :";
    cin>>t;
    cout<<"Total Profit of 15 items :";
    cin>>p;
    c1=t-p;
    c2=c1/15;
    cout<<endl;
    cout<<"Price of each items :"<<c2;
    return 0;
}