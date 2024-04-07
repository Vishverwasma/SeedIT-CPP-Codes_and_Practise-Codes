#include<bits/stdc++.h>
using namespace std;
struct demo{
int m,cm;
};
int main(){
    demo d1,d2,d3,d4,d;
    cout<<" m and cm :";
    cin>>d1.m>>d1.cm;

    cout<<endl<<" m and cm :";
    cin>>d2.m>>d2.cm;
    d3.m=d1.m+d2.m;
    d3.cm=d1.cm+d2.cm;
    d.cm=d3.cm;
    d.m=d3.m;
    if(d3.cm>100){
    d.cm=d3.cm%100;
    d.m=d3.cm/100;
    }
    d4.cm=d.cm;
    d4.m=d3.m+d.m;
    cout<<"centimeters : "<<d4.cm<<" Meters : "<<d4.m;
    return 0;
}