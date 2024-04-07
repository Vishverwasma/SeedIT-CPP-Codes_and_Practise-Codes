#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>

using namespace std;
int main(){
     int arr,x;
     int n;
     stack <int> ar;
     cout<<"Size of Array : ";
     cin>>n;
     for(int i=0;i<n;i++){
        cout<<"ELement : ";
        cin>>arr;
        ar.push(arr);
     }     
     while(!ar.empty()){
        cout<<"ELement : "<<ar.top()<<endl;
        ar.pop();
     }
}