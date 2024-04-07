#include<iostream>
using namespace std;

class Programming{
     string pri;
     public:
     Programming(){
        pri="I Love  Programming Languages ! ";
     }
     Programming(string p){
       pri="I Love "+p;
     }
     void print(){
        cout<<pri<<endl;
     }
};

int main(){
     Programming p;
     p.print();
     string lang;
     cout<<"Your Programming Language ! ";
     getline(cin,lang);
     Programming p1(lang);
     p1.print();
}