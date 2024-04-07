#include<iostream>
using namespace std;
int main(){
    int m,m1,m2,m3,m4,agg,perc;
    cout<<"Marks :";
    cin>>m>>m1>>m2>>m3>>m4;
    agg=m+m1+m2+m3+m4;
    perc=agg*100/500;
    cout<<"Aggregate marks :"<<agg<<endl;
    cout<<"Percentage :"<<perc;
    return 0;
}