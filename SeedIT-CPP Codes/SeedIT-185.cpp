#include<iostream>
#include<map>
#include<set>
#include<sstream>
using namespace std;
int main(){
    map<string ,string> m;
    set<string> s;
    m.insert(pair<string,string>("Vishwas","Durg"));
    m.insert(pair<string,string>("Aditya TA","Bhilai"));
    m.insert(pair<string,string>("Austin","Rajnandgaon"));
    m.insert(pair<string,string>("Raju","Raipur"));
    m.insert(pair<string,string>("Jay","Bilaspur"));
    m.insert(pair<string,string>("Damini","Balod"));
    m.insert(pair<string,string>("Pranit","Durg"));
    m.insert(pair<string,string>("Ojaswi","Raipur"));
    m.insert(pair<string,string>("Shashwat","Bhilai"));
    m.insert(pair<string,string>("Harshit","Durg"));
    m.insert(pair<string,string>("Shruti","Durg"));
    m.insert(pair<string,string>("Abhishek","Dongargarh"));
    m.insert(pair<string,string>("T Bhumika","Raipur"));
    m.insert(pair<string,string>("Shivali dey","Durg"));
    m.insert(pair<string,string>("Shreyansh","Bhilai"));
    int c=0;
    map<string,string>::iterator p;
    set<string>::iterator q;
    for(p=m.begin();p!=m.end();p++){
        s.insert(p->second);
    }
    int sz=s.size();
    cout<<"Number of students in : "<<endl;
    for(q=s.begin();q!=s.end();q++){
        for(p=m.begin();p!=m.end();p++){
            if(*q==p->second){
                c++;
            }
        }
        cout<<*q<<" is "<<c<<endl;
        c=0;
    }

}