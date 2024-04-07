#include<bits/stdc++.h>

using namespace std;

  class scale{
    int m,cm;
    public:
    void input(){
       cout<<"Meter : ";
       cin>>m;
       cout<<endl<<"Centimeter : ";
       cin>>cm;
       cout<<endl;
     }
     scale operator+(scale s2){
        scale s3;
        s3.m=m+s2.m;
        s3.cm=cm+s2.cm;
        return s3;
     }
     void convert(){
        int d,e;
        if(cm>=100){
            d=cm/100;
            m=m+d;
            cm=cm-d*100;
        }
     }
     void display(){ 
       cout<<"Answer : "<<endl<<m<<"-Meter ,"<<endl<<cm<<"-CentiMeter"<<endl;
     }
  };

int main(){
     scale s1,s2,s3;
    s1.input();
    s2.input();
    s3=s1+s2;
    s3.convert();
    s3.display();
}