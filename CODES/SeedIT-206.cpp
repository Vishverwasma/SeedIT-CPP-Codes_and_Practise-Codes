#include<iostream>
#include<bits/stdc++.h>
using  namespace std;

void factorial(){
    int i,f=1,n;
    cout<<"Number : ";
    cin>>n;
    for(i=1;i<n+1;i++){
        f=f*i;
    }
    cout<<endl<<f<<endl;
}
main(){
    factorial();
}
