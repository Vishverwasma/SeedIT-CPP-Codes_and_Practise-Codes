#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your Character :";
    cin>>ch;
    if((ch>='a') && (ch<='z') && (ch>='A') && (ch<='Z')){
        cout<<"' "<<ch<<" ' is Alphabet";
    }
    else{
        cout<<"' "<<ch<<" ' is not an Alphabet";
    }
    return 0;
}