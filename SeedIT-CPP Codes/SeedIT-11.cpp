#include<iostream>
using namespace std;
int main(){
    int bs;
    cout<<" Basic Salary : ";
    cin>>bs;
    float hra,da,gross;
    if(bs<=10000){
        da=bs*80/100;
        hra=bs*20/100;
    }
    else if(bs>10000 && bs<=20000){
        da=bs*90/100;
        hra=bs*25/100;
    }
    else {
        da=bs*95/100;
        hra=bs*30/100;
    }
    gross = bs+da+hra;
    cout<<gross<<endl;
    return 0;
}