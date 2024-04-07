#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main(){
    unordered_set<string> x;
    set<string> y;
    string word;
    cout<<"Number Of Words : ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>word;
        x.insert(word);
        y.insert(word);
    }
    unordered_set<string>::iterator p;
    cout<<endl<<" unordered_set :  ";
    for(p=x.begin();p!=x.end();p++){
        cout<<*p<<" ";
    }
    cout<<endl<<" Ordered_set :  ";
    set<string>::iterator q;
    for(q=y.begin();q!=y.end();q++){
        cout<<*q<<" ";
    }
    
}