#include<iostream>
using namespace std;
class rectangle{
     float l1,l2,b1,b2,Area1,Area2;
     public:
    void rec1(){
        cout<<"Length : ";
        cin>>l1;
        cout<<endl<<"Breadth : ";
        cin>>b1;
    }
    void r1a(){
        Area1=l1*b1;
        cout<<"Area 1 :"<<Area1<<endl;
    }
    void rec2(){
        cout<<"Length : ";
        cin>>l2;
        cout<<endl<<"Breadth : ";
        cin>>b2;
    }
    void r2a(){
        Area2=l2*b2;
        cout<<"Area 2 :"<<Area2<<endl;
    }
    void comp(){
        cout<<"Comparing two Areas :";
        if(Area1>Area2){
            cout<<endl<<"Area 1 is greater than Area 2 by "<<Area1-Area2;
        }
        else if(Area1<Area2){
            cout<<endl<<"Area 2 is greater than Area 1 by "<<Area2-Area1;
        }
        else if(Area1==Area2){
            cout<<endl<<"Area 1 and  Area 2 are equal.";
        }
    }
};
int main(){
    rectangle rt;
    rt.rec1();
    rt.r1a();
    rt.rec2();
    rt.r2a();
    rt.comp();
    return 0;
}