#include<bits/stdc++.h>
using namespace std;

void vb(){


cout<<" To Find The Name Thats Not Prime in Length ! "<<endl;
cout<<"Number of Names : ";
string a[100],b[100],c;
int g[50],l=0,m,n;
cin>>n;
for(int i=0;i<n+1;i++){
    getline(cin,a[i]);
}
for(int i=0;i<n+1;i++){
    stringstream p(a[i]),q(a[i]),r(a[i]);
    while(p>>c){
        l=l+1;
    }
    b[l];m=0;
    cout<<endl<<"Prime Ones Are : ";
    while(q>>c){
        b[m]=c;
        m=m+1;
        for(int i=0;i<m;i++){
            g[i]=b[i].length();
    if(g[i]%2!=0 && g[i]%(g[i]/2)!=0){
        cout<<b[i]<<" "<<endl;
       }
    else{
        cout<<" "<<endl;
       }
            }            
        }
    }
}




int main(){
    vb();
    return 0;
}