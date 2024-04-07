#include<iostream>
using namespace std;
class M{
     int id;
     public:
     M(int x){
        id=x;
        cout<<"Running ID - "<<id<<endl;
     }
     ~M(){
        cout<<"Delete ID - "<<id<<endl;
     }
};
int main(){
    M x1(1),x2(2),x3(3),x4(4);
}