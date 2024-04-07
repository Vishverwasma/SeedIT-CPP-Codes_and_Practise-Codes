#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <string> a,b;
    string c,d;
    int n;
    cout<<" Number of Vector Elements : ";
    cin>>n;
    for(int i=0;i<n+1;i++){
        getline(cin,c);
        a.push_back(c);
    }
    c="";

    for(int i=0;i<n+1;i++){       
        for(int k=a[i].length()-1;k>=0;k--){
           c=c+a[i][k];
        }
       // cout<<c<<"\n";
        b.push_back(c);
        c="";
       }
    
    for(int i=0;i<n+1;i++){
        if(a[i]==b[i]){
            cout<<a[i]<<" ";
        }
              
    }
    
    return 0;
}