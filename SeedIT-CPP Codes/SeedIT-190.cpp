#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    multimap<string , int>nk;
    set<string> nme;
    string nm;
    int mrk,n;

    cout<<"Number Of Entries : ";
    cin>>n;
    for(int j=0;j<n;j++){

    cout<<"Please Enter The Name And MArks Of A Student : "<<endl;
    for(int i=0;i<5;i++){
        cin>>nm;
        cin>>mrk;
        nk.insert(pair<string,int>(nm,mrk));
        nm="";
        mrk=0;
    }
    multimap<string,int>:: iterator p;
    set<string>:: iterator q;
    for(p=nk.begin();p!=nk.end();p++){
        nme.insert(p->first);
    }
    for(q=nme.begin();q!=nme.end();q++){
            cout<<*q<<" - ";
        
    }
    for(q=nme.begin();q!=nme.end();q++){
        for(p=nk.begin();p!=nk.end();p++){
             if(*q==p->first){
                cout<<p->second<<" ";
             }
        }
        cout<<endl;
    }

}
}