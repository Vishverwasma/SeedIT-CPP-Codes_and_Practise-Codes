#include<iostream>
using namespace std;
struct demo{
    int roll;
    string name;
    float m1,m2,m3; 
};
int main(){
    demo d;
    cin>>d.roll>>d.name>>d.m1>>d.m2>>d.m3;
    int s=d.m1+d.m2+d.m3;
    int perc=(s*100)/300;
    cout<<"Roll Number "<<d.roll<<" Student "<<d.name<<" ha obtained  a total of "<<s<<" and percentage "<<perc<<"%";
    return 0;
}