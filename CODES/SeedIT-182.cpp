#include<iostream>
#include<map>
using namespace std;
int main(){
     map <string,int> m;
    m.insert(pair<string,int>("Vishwas",01));
    m.insert(pair<string,int>("Khileshwar",02));
    m.insert(pair<string,int>("Chota",03));
    m.insert(pair<string,int>("GriMxZerO",04));
    m.insert(pair<string,int>("ZerOGutS",05));
    m.insert(pair<string,int>("VERMASKING",06));
    m.insert(pair<string,int>("VAST",07));
    int max=0;
    string topper="";
     map<string,int>::iterator p;
     for(p=m.begin();p!=m.end();p++){
        cout<<p->first<<" "<<p->second<<endl;
        if(p->second>max){
            max=p->second;
            topper=p->first;
        }
     }
     cout<<endl<<endl<<"Topper is "<<topper<<" With " <<max<<" as The Max Value !";
}