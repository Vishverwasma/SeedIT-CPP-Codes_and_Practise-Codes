#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>
using namespace std;
int main(){
     stack <int> s,v;
     vector<int> n;
     int sz,x,w;
     cout<<"Size of Stack : ";
     cin>>sz;
     for(int i=0;i<sz;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>x;
        s.push(x);
     }
     for(int i=0;i<sz;i++){
        w=s.top();
        n.push_back(w);
        s.pop();
     }
     for(int i=sz-1;i>=0;i--){
        v.push(n[i]);
     }
     for(int i=0;i<sz;i++){
     cout<<"Element "<<i+1<<" : "<<v.top()<<endl;
     v.pop();
     }
}