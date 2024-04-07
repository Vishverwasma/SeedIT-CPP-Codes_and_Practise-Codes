#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>

using namespace std;
int main(){
     stack <int> n,m;
     vector <int> o,p;
     cout<<"Number of Element : ";
     int sz,x,y;
     cin>>sz;
     for(int i=0;i<sz;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>x;
        n.push(x);
     }
     for(int i=0;i<sz;i++){
        while(!n.empty()){
        y=n.top();
        o.push_back(y);
        n.pop();
     }
     }
      for(int i=sz-1;i>=0;i--){
       p.push_back(o[i]);
       if(i==sz/2){
       p.pop_back();
       }
     }
     for(int i=sz-2;i>=0;i--){
        m.push(p[i]);
     }
     for(int i=0;i<sz-1;i++){
        while(!m.empty()){
        cout<<" : "<<m.top()<<endl;
        m.pop();
     }
     }
}