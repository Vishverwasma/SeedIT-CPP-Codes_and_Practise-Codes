#include<iostream>
using namespace std;
int main(){
    int bs,da,hra;
    float gross;
    cout<<"Basic sallary :";
    cin>>bs;
    da=40*bs/100;
    hra=20*bs/100;
    gross=bs+da+hra;
    cout<<"Gross Sallary :"<<gross;
    return 0;
}