#include<iostream>
using namespace std;
class Volume{
     float len,brd,ht;
     float vol;
     public:
     void getData(){
        cout<<"Length : ";
        cin>>len;
        cout<<"Breadth : ";
        cin>>brd;
        cout<<"Height : ";
        cin>>ht;
     }
     void volume(){
        vol=len*brd*ht;
        cout<<endl<<vol;
     }
};
int main(){
     Volume vl;
     vl.getData();
     vl.volume();
     return 0;
}