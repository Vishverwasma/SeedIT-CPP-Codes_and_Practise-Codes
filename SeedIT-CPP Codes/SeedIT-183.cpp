#include<iostream>
#include<map>
using namespace std;
int main(){
    map <string,int> m;
    int max=0;
    string top="";
    m.insert(pair<string,int>("Vishwas ",95));
    m.insert(pair<string,int>("Raju ",68));
    m.insert(pair<string,int>("Aaditya ",84));
    m.insert(pair<string,int>("Vibhanshu ",85));
    m.insert(pair<string,int>("Akshat ",86));
    m.insert(pair<string,int>("Shashwat ",89));
    m.insert(pair<string,int>("Shreyansh ",90));
    m.insert(pair<string,int>("Pranit ",90));
    m.insert(pair<string,int>("Ojaswi ",91));
    m.insert(pair<string,int>("Atul ",75));
    m.insert(pair<string,int>("Ayush ",76));
    m.insert(pair<string,int>("Kumar Vyom ",79));
    m.insert(pair<string,int>("Ashutosh ",84));
    map<string,int>::iterator p;
    for(p=m.begin();p!=m.end();p++){
        cout<<p->first<<" - "<<p->second<<endl;
    }
    for(p=m.begin();p!=m.end();p++){
        if(p->second>max){
            max=p->second;
            top=p->second;
        }
    }
    cout<<endl<<"Topper is "<<top<<" with the Highest Marks of : "<<max;
}