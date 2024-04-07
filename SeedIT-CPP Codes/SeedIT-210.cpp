#include<iostream>
using namespace std;

class Bank{
     int bal,tf,dep;
     public:
     void input();
     void trans();
     void Deposit();
     Bank();
     Bank(int x,int y,int z);
     void transfer(Bank u2);
};
Bank::Bank(){}
Bank::Bank(int x,int y,int z){
        bal=x;
        tf=y;
        dep=z;
     }
void Bank::input(){
    cout<<"Balance Amount : ";
    cin>>bal;
}
void Bank::trans(){
    cout<<endl<<"Transfer Amount : ";
    cin>>tf;
}
void Bank::Deposit(){
    cout<<"Deposit : ";
    cin>>dep;
}
void Bank::transfer(Bank u2){
     int x=(bal+dep)-tf;
     if(x>2000){
        bal=bal-tf+dep;
        u2.bal=u2.bal+tf;
        cout<<"User 1 Account Balance is "<<bal;
        cout<<endl<<"User  Account Balance is "<<u2.bal;
        cout<<endl<<" while the tranfer amount was "<<tf<<" and deposit of "<<dep<<" was made by User 1 ! ";
     }
     else{
        cout<<"Insufficient Balance ! ";
     }
}
int main(){
    Bank u1,u2;
    u1.input();
    u1.Deposit();
    u1.trans();
    u2.input();
    u1.transfer(u2);
}