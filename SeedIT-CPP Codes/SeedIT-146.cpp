#include<iostream>
using namespace std;
class Bank{
     int id;
     int bal,with;
     public:
     void input(){
        cout<<"ID : ";
        cin>>id;
        cout<<"Balance : ";
        cin>>bal;
     }
     void withdraw(){
       cout<<"To Withdraw : ";
       cin>>with;
     }
     void Transfer(Bank b2){
        if(bal>with && bal-with>=500){
           bal=bal-with;
           b2.bal=b2.bal+with;
                   cout<<"After The Process The Amount in Id "<<id<<" is "<<bal<<" and ID "<<b2.id<<" comes out to be "<<b2.bal<<endl;

        }
        else{
            bal=bal;
            b2.bal=b2.bal;
            cout<<"Transfer Is Not Possible as Balance in Account "<<id<<" is not sufficient ! "<<endl;
        }
     }
};
int main(){
    Bank b1,b2;
    b1.input();
    b1.withdraw();
    b2.input();
    b1.Transfer(b2);
}