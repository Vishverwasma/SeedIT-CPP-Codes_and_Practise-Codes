//set in c++


#include<iostream>
#include<set>
using namespace std;


int main(){
     set <int> v;
     int x,n;
     cout<<"Your limit : ";cin>>n;
     cout<<"Your inputs : ";
     for(int i=0;i<n;i++){
        cin>>x;
        v.insert(x);
     }
     set <int> :: iterator p;
     for(p=v.begin();p!=v.end();p++){
        cout<<*p<<" ";
     }
}