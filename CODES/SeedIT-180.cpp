#include<iostream>
#include<set>
using namespace std;
int main(){
     set <int> v;
     int sum=0;
     cout<<endl;
     int x;
     cout<<"Element : ";
     set <int> :: iterator p;
     while(x!=-1){
            cin>>x;
            v.insert(x);
        }
        for(p=v.begin();p!=v.end();p++){
            sum=sum+*p;
            cout<<endl<<*p;
        }
        cout<<endl<<sum;
     
}