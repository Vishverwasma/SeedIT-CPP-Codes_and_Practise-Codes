//Pigie Bank
#include<iostream>
using namespace std;

class AddAmount{
     int amount=50;
     public:
     AddAmount(){
        amount=50;
     }
     AddAmount(int amt){
     amount=amount+amt;
     }
     void print(){
        cout<<amount<<endl;
     }
};

int main(){
     AddAmount aa;
     aa.print();
     int n;
     cout<<"The Amount you wanna add : ";
     cin>>n;
     AddAmount aa1(n);
     aa1.print();
}