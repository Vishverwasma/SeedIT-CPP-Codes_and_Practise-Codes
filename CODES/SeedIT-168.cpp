#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>

using namespace std;
int main(){
     stack <string> n,m;
     vector <string> o,p;
     string s,u,v,w;
     int sz;
     cout<<"Number Of Elements : ";
     cin>>sz;
     for(int i=0;i<sz;i++){
      cout<<"Name "<<i+1<<" : ";
        cin>>s;
        n.push(s);
     }
     cout<<"Your Names In Reverse word Order : ";
     for(int i=0;i<sz;i++){
      while(!n.empty()){
         u=n.top();
         reverse(u.begin(),u.end());
         o.push_back(u);
         n.pop();
      }
     }
     for(int i=0;i<sz;i++){
        w=o[i];
        m.push(w);
     }
     for(int i=0;i<sz;i++){
     while(!m.empty()){
      cout<<"Name "<<i+1<<" : ";
      cout<<m.top()<<endl;
      m.pop();
     }
     }
}