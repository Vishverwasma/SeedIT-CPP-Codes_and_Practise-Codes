#include<iostream>
#include<set>
/*
#include<multiset>
*/
using namespace std;
int main(){
    multiset <int,greater<int>> v;
    multiset <int> u;
    cout<<"Insert Values : ";
    int x;
    while(x!=-1){
        cin>>x;
        v.insert(x);
        u.insert(x);
    }
    multiset<int>:: iterator p;
    for(p=v.begin();p!=v.end();p++){
        cout<<*p<<" ";
    }
    cout<<endl;
    multiset<int>:: iterator q;
    for(q=u.begin();q!=u.end();q++){
        cout<<*q<<" ";
    }
}