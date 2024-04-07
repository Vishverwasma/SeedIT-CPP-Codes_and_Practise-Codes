#include<bits/stdc++.h>
using namespace std;
void vc(){
    cout<<"To check the vovels and Consonants !";
    cout<<"number of Student s : ";
    int n,m,c=0;
    cin>>n;
    string s[100],t;
    for(int i=0;i<n;i++){
       getline(cin,s[i]);
    }
    for(int i=0;i<n;i++){
       stringstream p(s[i]);
       while(p>>t){
          m=t.length();
          for(int j=0;j<m;j++){
            if(t[j]=='A' || t[j]=='E' || t[j]=='I' || t[j]=='O' || t[j]=='U' || t[j]=='a' || t[j]=='e' || t[j]=='i' || t[j]=='o'|| t[j]=='u' ){
                c++;
            }
        
          }
          if(c!=0){
        cout<<t<<" ";
    }
    cout<<" ";
    c=0;
       }
    }
}
int main(){
    vc();
    return 0;
}