#include<iostream>
using namespace std;
class Average{
     float a,b,c,avg;
     public:
     void inp(){
        cout<<"Three Numbers : ";
        cin>>a>>b>>c;
        cout<<endl;
     }
     void avrg(){
        int sum;
        sum=a+b+c;
        avg=sum/3;
        cout<<avg<<endl<<endl;
     }
};
class NAverage{
     float a[50],avg;
     int n;
     public:
     void inp(){
        cout<<"Number Of Elements : ";
        cin>>n;
        cout<<endl<<"Numbers : "<<endl;
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
        cout<<endl;
     }
     void avrg(){
        int sum;
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
        avg=sum/n;
        cout<<avg;
     }
};
int main(){
    Average av;
    av.inp();
    av.avrg();
    NAverage avv;
    avv.inp();
    avv.avrg();
    return 0;
}