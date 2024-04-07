#include<iostream>
#include<map>
#include<sstream>
using namespace std;
int main(){
    map<string ,string> m;
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
    string loc="";
    map<string,string>::iterator p;
    cout<<"Out of : ";
    for(p=m.begin();p!=m.end();p++){
    cout<<" : "<<p->second<<endl;
    }
    cout<<" Choose any Loction You Wish to Select !";
    getline(cin,loc);
    for(p=m.begin();p!=m.end();p++){
        if(p->second==loc){
            c++;
        }
    }
    cout<<"Total Number Of Studets in "<<loc<<" city are : "<<c<<" whao are : ";
    for(p=m.begin();p!=m.end();p++){
        if(p->second==loc){
            cout<<endl<<p->first<<endl;
        }
    }
}