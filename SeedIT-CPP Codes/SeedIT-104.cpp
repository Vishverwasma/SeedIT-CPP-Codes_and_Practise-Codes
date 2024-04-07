#include<bits/stdc++.h>
using namespace std;

void rev(){
 cout<<"To  Reverse a String word by Word not element by element ! ";
 cout<<endl<<"Your Input : ";
 string a,b;
 getline(cin,a);
 stringstream p(a),q(a);
 int c=0;
 while(p>>b){
    c++;
 }
 string d[c];
 int i=0;
 while(q>>b){
   d[i]=b;
   i++;
 }
 for(int j=c-1;j>=0;j--){
    cout<<d[j]<<" ";
 }
 cout<<endl;
}

void abr(){
string e,f;
cout<<"To abbrevate the given Name : ";
cout<<"Your Input name : ";
getline(cin,e);
stringstream p(e),q(e);
int c=0;
while(p>>f){
    c++;
}
int i=1;
while(q>>f){
    if(i==c){
        cout<<f;
    }
    else{
        cout<<f[0]<<" ";
    }
    i++;
}
cout<<endl;
}

void nmlnth(){
    cout<<endl<<"To find a Name Asked By User !";
    string i,j,k;
    getline(cin,i);
    cout<<"Name To Find with its length :";
    cin>>j;
    stringstream p(i);
    while(p>>k){
        if(j==k){
            cout<<k<<" "<<k.length();
           
            }
        }
        cout<<endl;
    }


void pel(){
string g,h,l="";
int j;
cout<<"To Find Name That is Pelendrome !";
cout<<endl<<"Names You Want : ";
getline(cin,g);
stringstream p(g);
while(p>>h){
 for(j=h.length()-1;j>=0;j++){
    l=l+h[j];
 }   
 if(l==h){
    cout<<l<<" ";
   l="";
}
} cout<<endl;
}

void nmip(){
    cout<<"To Input Name in string in for loop ! "<<endl;
    cout<<"Number of students : ";
    int n;
    string m[50];
    cin>>n;
    for(int i=0;i<n+1;i++){
       getline(cin,m[i]);
    }
    for(int i=0;i<n+1;i++){
        cout<<m[i]<<" "<<endl;
    }
}


int main(){
    rev();
    abr();
    nmlnth();
    pel();
    nmip();
    return 0;
}