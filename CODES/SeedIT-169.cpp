#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>

using namespace std;
int main(){
     string s,t,w,u;
     stack <string> v;
     
        cout<<"Name : ";
        cin>>s;
     int sz=s.size();
    /* for(int i=0;i<sz;i++){
     }*/
     for(int i=0;i<sz;i++){
        t=s[i];
        v.push(t);
     }
     while(!v.empty()){
        cout<<v.top();
        v.pop();
     }
}