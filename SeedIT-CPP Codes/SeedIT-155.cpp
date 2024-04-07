#include<iostream>
using namespace std;
class mammals{
     public:
     void printmm(){
        cout<<"I am a Mammal !"<<endl;
     }
};
class marineAnimal{
     public:
     void printma(){
        cout<<"I am a Marine Animal !"<<endl;
     }
};
class BlueWhale:public mammals,public marineAnimal
{
     public:
     void print(){
        cout<<"I am a Both !!"<<endl;
     }
};
int main(){
    mammals obm;
    obm.printmm();
    marineAnimal obma;
    obma.printma();
    BlueWhale bw;
    bw.print();
    bw.printmm();
    bw.printma();
}