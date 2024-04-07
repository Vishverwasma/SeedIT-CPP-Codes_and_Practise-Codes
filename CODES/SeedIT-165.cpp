#include<stack>
#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
using namespace std;
int main(){
    stack <int> s;
    vector <string> v;
    int sz,n;
    string c;
    cout<<"Number of Elements : ";
    cin>>sz;
    for(int i=0;i<sz;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>n;
        s.push(n);
    }
     for(int i=0;i<sz-1;i++){
        cout<<"Operation you wanna Perform : ";
        cin>>c;
        v.push_back(c);
    }
    int x,y;
    for(int i=0;i<v.size();i++){
        x=s.top();
        s.pop();
        y=s.top();
        s.pop();
        if(v[i]=="+"){
           s.push(x+y);
        }
        else if(v[i]=="-"){
            s.push(x-y);
        }
        else if(v[i]=="+"){
            s.push(x+y);
        }
        else if(v[i]=="*"){
            s.push(x*y);
        }
    }
        cout<<s.top();
}