#include<iostream>
using namespace std;
class complex{
     int real[100],img[100];
     int n;
     public:
     void inp(){
        cout<<"Number of Numbers : ";
        cin>>n;
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<" real "<<i+1<<" : ";
         cin>>real[i];
         cout<<endl<<" Imaginary "<<i+1<<" : ";
         cin>>img[i];
         cout<<endl;
     }
     }
     void sumr(){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+real[i];
        }
        cout<<endl;
     }
     void sumi(){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+img[i];
        }
        cout<<endl;
     }
     void numb(){
        for(int i=0;i<n;i++){
            cout<<"Number "<<i+1<<" is "<<real[i]<<" + "<<img[i]<<"i"<<endl;
        }
        cout<<endl;
     }
};
int main(){
    complex cm;
    cm.inp();
    cm.sumr();
    cm.sumi();
    cm.numb();
    return 0;
}