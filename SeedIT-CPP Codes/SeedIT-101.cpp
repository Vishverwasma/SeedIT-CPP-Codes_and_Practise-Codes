//Questions From Code For Win - Self Solved !
#include<iostream>
using namespace std;
void len(){
    string s;
    cout<<"Length : ";
    cin>>s;
    cout<<s.length();
    cout<<endl;
}
void copy(){
    string u,t;
    string cp="";
    cout<<"Copy one String To Another : ";
    cout<<endl<<"First Element :";
    cin>>u;
    cout<<endl<<"Second Element :";
    cin>>t;
    cp=u;
    u=t;
    t=cp;
    cout<<"After Swapped :"<<endl;
    cout<<u<<endl;
    cout<<t<<endl;
}
void concatenate(){
    string a,b,c="";
    cout<<endl<<"To Concatenate : "<<endl<<"First String : ";
    cin>>a;
    cout<<"Second String : ";
    cin>>b;
    c=a+" "+b;
    cout<<c<<endl;
}
void compare(){
    cout<<"Comparing two String : ";
    cout<<endl;
    string m,n;cout<<"String 1 : ";
    cin>>m;cout<<"String 2 : ";
    cin>>n;
    int c=0,d=0;
    for(int i=0;i<m.length();i++){
        if(m[i]>m[i+1]){
           c=m[i];
           m[i]=m[i+1];
           m[i+1]=c;
           cout<<m[i]<<" ";
           c=0;
        }
    }
    for(int i=0;i<n.length();i++){
        if(n[i]>n[i+1]){
            d=n[i];
            n[i]=n[i+1];
            n[i+1]=d;
            cout<<n[i]<<" ";
            d=0;
        }
    }
    for(int i=0;i<n.length();i++){
        if(m[i]==n[i]){
            c=c+1;
        }
        else{
            c=0;
        }
    }
    cout<<endl;
    if(c!=0){
        cout<<"Equal !";
    }
    else if(c==0){
    cout<<"Not Equal !";
}    
}
void convertupper(){
    cout<<endl<<"Coversion : "<<endl;
    cout<<"Upper Case : ";
    string q,r,s;
    cout<<"Upper Case Value : ";
    cin>>q;
    for(int i=0;i<q.length();i++){
        if(q[i]>='a' && q[i]<='z'){
         q[i]=q[i]-32;
        }
    }
    cout<<q<<endl;
    
}
void convertlower(){
    cout<<endl<<"Coversion : "<<endl;
    cout<<"Lower Case : ";
    string r,s;
    cout<<"Upper Case Value : ";
    cin>>r;
for(int j=0;j<r.length();j++){
        if(r[j]>='A' && r[j]<='Z'){
          r[j]=r[j]+32;
        }
    }
    cout<<r<<endl;
}
void converttoggle(){
    cout<<endl<<"Coversion : "<<endl;
    cout<<"Toggle Case : ";
    string r,s;
    cout<<"Upper Case Value : ";
    cin>>r;
for(int j=0;j<r.length();j++){
        if(r[j]>='A' && r[j]<='Z' ){
            r[j]=r[j]+32;
        }
        else if( r[j]>='a' && r[j]<='z'){
            r[j]=r[j]-32;
        }
    }
    cout<<r<<endl;
}

int main(){
    len();
    copy();
    concatenate();
    compare();
    convertupper();
    convertlower();
    converttoggle();
    return 0;
}