#include<iostream>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
void qw(){
   string a,b;
   cout<<"Input with space :";
   getline(cin,a);
   stringstream p(a);
   while(p>>b){
    cout<<b<<" "; 
    }
}
void qe(){
    string c,d;
    cout<<endl<<" To find Length Of Each Word/Element In A String : "<<endl;
    cout<<"Your Input : ";
    getline(cin,c);
    stringstream p(c);
    while(p>>d){
        cout<<d<<" "<<d.length()<<endl;
    }
}

void qr(){
   string e,f,h="";
   int max=0,g;
   cout<<endl<<"To find the greatest Element : ";
   cout<<endl<<"Your Input : ";
   getline(cin,e);
   stringstream p(e);
   cout<<endl<<"The Element with max Length is : ";
   while(p>>f){
    g=f.length();
    if(g>max){
        max=g;
        if(max>=g){
            h=f;
        }
        g=0;
    }
  }  
    cout<<h<<" "<<max;
   }
void qt(){
    cout<<endl<<"To find a word Length Asked By User !";
    string i,j,k;
    getline(cin,i);
    cout<<"Word Length To Find :";
    cin>>j;
    stringstream p(i);
    while(p>>k){
        if(j==k){
            cout<<k<<" "<<k.length();
           
            }
        }
    }

   
int main(){
qw();
qe();
qr();
qt();

return 0;
}