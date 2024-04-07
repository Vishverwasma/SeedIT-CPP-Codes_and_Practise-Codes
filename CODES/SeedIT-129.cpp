#include<bits/stdc++.h>
using namespace std;
class back{
     int accid;
     string name;
     float bal;
     public:
     void input(){
        cin>>accid>>name>>bal;
     }
     void wd(){
        float w,y=bal;
        cout<<"Amount to Withdraw : ";
        cin>>w;
        bal=bal-w;
        if(bal>1000){
           cout<<"Can Be Withdrawn !";
           
        }
        else {
           cout<<"Can Not Be Withdrawn as the balance amount after withdrawl is less than 1000/- !";
           bal=y;
        }
        cout<<endl;
     }
     void dep(){
        int dip;
        cout<<endl<<"The Amount You wish to diposit :";
        cin>>dip;
        bal=bal+dip;
        cout<<"Amount after withdrawn and diposit in account is :"<<bal;
     }
};
int main(){
    back b;
    b.input();
    b.wd();
    b.dep();
    b.wd();
    b.dep();
    return 0;
}