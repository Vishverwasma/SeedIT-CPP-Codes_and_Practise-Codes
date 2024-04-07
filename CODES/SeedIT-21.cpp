#include<iostream>
using namespace std;
int main(){
    int dates ,x , yr,mnth,days;
    cout<<"Number of days :";
    cin>>dates;
    x=dates;
    yr=dates/365;
    dates=dates%365;
    /*if(x%186==0){
        mnth=x/186;
    }else if(x%180!=0){
        mnth=x/180;
    }*/
    mnth=dates/30;
    dates=dates%30;
    days=dates%7;
    cout<<"Day "<<days<<" of month "<<mnth+1<<" of year "<<yr<<" is answer for "<<x<<endl;
    return 0;  
    }