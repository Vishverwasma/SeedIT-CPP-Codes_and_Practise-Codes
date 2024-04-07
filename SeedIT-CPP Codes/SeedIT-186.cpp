#include<iostream>
#include<sstream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
     multimap<string,int> stu;
     set<string> st;
    stu.insert(pair<string,int>("Vishwas",65));
    stu.insert(pair<string,int>("Salom",89));
    stu.insert(pair<string,int>("Vishwas",57));
    stu.insert(pair<string,int>("Salom",72));
    stu.insert(pair<string,int>("Vishwas",39));
    stu.insert(pair<string,int>("Salom",47));
    stu.insert(pair<string,int>("Vishwas",58));
     
     

     multimap<string,int>::iterator p;
     set<string>::iterator q;
     
     for(p=stu.begin();p!=stu.end();p++){
          st.insert(p->first);
     }
     int sz=st.size();
     int sum=0,s[50];
    
    
for(q=st.begin();q!=st.end();q++){
     sum=0;
     for(p=stu.begin();p!=stu.end();p++){
          
          if(*q==p->first){
            sum=sum+p->second;
          }     
}     
          cout<<*q<<" - Marks - "<<sum<<endl;
          }
}