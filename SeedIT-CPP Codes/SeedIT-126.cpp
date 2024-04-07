#include<iostream>
using namespace std;
struct pripub{
   private:
   int a;
   public:
   void inp(){
        cin>>a;
   }
   void out(){
    if(a%2==0){
        cout<<"Even !";
    }
    else{
        cout<<"Odd !";
    }
   }
};
int main(){
     pripub s;
     s.inp();
     s.out();
return 0;
}