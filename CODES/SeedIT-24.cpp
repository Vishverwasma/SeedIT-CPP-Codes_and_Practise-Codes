#include<iostream>
using namespace std;
int main(){
    int mnth,day;
    cout<<"enter the month :";
    cin>>mnth;
    if(mnth%2!=0){
        cout<<"It Has 31 Days";
    }
    else if(mnth==2){
        cout<<"This month has 28/29 days";
    }
    else if(mnth%2==0){
        cout<<"This month has 30 days";
    }
    return 0;
}