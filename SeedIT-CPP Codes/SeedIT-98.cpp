#include<iostream>
using namespace std;
void str(){
    string n;
    cin>>n;
    for(int i=0;i<n.length();i++){
        cout<<n[i];
        cout<<endl;
}
}
void str1(){
    string m;
    cin>>m;
    int c=0;
    for(int i=0;i<m.length();i++){
        if(m[i]=='A' || m[i]=='E' || m[i]=='I' || m[i]=='O' || m[i]=='U' || m[i]=='a' || m[i]=='e' || m[i]=='i' || m[i]=='o' || m[i]=='u' ){
            c=c+1;
        }
        
    }
    if(c!=0){
        cout<<c<<" number of Vovels are present ";
    }
    else if(c==0){
        cout<<"No Vovels !";

    }
}
void str2(){
    int u=0,l=0,n=0,s=0;
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]>=65 && x[i]<=90){
            u=u+1;
        }
        else if(x[i]>=97 && x[i]<=122){
            l=l+1;
        }
        else if(x[i]>=48 && x[i]<=57){
            n=n+1;
        }
        else{
            s=s+1;
        }
    }
    cout<<"Upper Case :" <<u<<endl<<"Lower Case :"<<l<<endl<<"Numbers :"<<n<<endl<<"Symbols :"<<s;
}
void str3(){
    int u=0,l=0,n=0,s=0;
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]>=65 && x[i]<=90){
            u=u+1;
        }
        else if(x[i]>=97 && x[i]<=122){
            l=l+1;
        }
        else if(x[i]>=48 && x[i]<=57){
            n=n+1;
        }
        else{
            s=s+1;
        }
    }
    if(u==0 || l==0 || n==0 || s==0){
        cout<<"Weak Password";
    }
    else{
            cout<<"You Just Barely Made It !";
    }   
    }
    void str4(){
        string x,y="",z;
    int i;
    cin>>x;
    z=x;
    cout<<" Reverse Ordere : "<<y<<endl;
    for(i=x.length()-1;i>=0;i--){
        y=y+x[i];
    }
    cout<<y;
    cout<<endl;
    if(x==y){
        cout<<"Pelendrome!";
            }
        else if(x!=y){
        cout<<"Not Pelendrome!";
            }
           
    }

int main(){
/*
    /*string n;
    cin>>n;
    for(int i=0;i<n.length();i++){
        cout<<n[i];
        cout<<endl;
    }
    */
    /*  ----------------------------------------------------------------------------------------------------------------------------------
    string m;
    cin>>m;
    int c=0;
    for(int i=0;i<m.length();i++){
        if(m[i]=='A' || m[i]=='E' || m[i]=='I' || m[i]=='O' || m[i]=='U' || m[i]=='a' || m[i]=='e' || m[i]=='i' || m[i]=='o' || m[i]=='u' ){
            c=c+1;
        }
        else if(m[i]!='A' || m[i]!='E' || m[i]!='I' || m[i]!='O' || m[i]!='U' || m[i]!='a' || m[i]!='e' || m[i]!='i' || m[i]!='o' || m[i]!='u' ){
            c=0;
        }
    }
    if(c!=0){
        cout<<c<<" number of Vovels are present ";
    }
    else if(c==0){
        cout<<"No Vovels !";

    }
    */
    /* -----------------------------------------------------------------------------------------------------------
    int u=0,l=0,n=0,s=0;
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]>=65 && x[i]<=90){
            u=u+1;
        }
        else if(x[i]>=97 && x[i]<=122){
            l=l+1;
        }
        else if(x[i]>=48 && x[i]<=57){
            n=n+1;
        }
        else{
            s=s+1;
        }
    }
    cout<<"Upper Case :" <<u<<endl<<"Lower Case :"<<l<<endl<<"Numbers :"<<n<<endl<<"Symbols :"<<s;
    */
    /*----------------------------------------------------------------------------------------------------------------------------------
    int u=0,l=0,n=0,s=0;
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]>=65 && x[i]<=90){
            u=u+1;
        }
        else if(x[i]>=97 && x[i]<=122){
            l=l+1;
        }
        else if(x[i]>=48 && x[i]<=57){
            n=n+1;
        }
        else{
            s=s+1;
        }
    }
    if(u==0 || l==0 || n==0 || s==0){
        cout<<"Weak Password";
    }
    else{
            cout<<"You Just Barely Made It !";
    }
    */
    /*
    string x,y="",z;
    int i;
    cin>>x;
    z=x;
    for(i=x.length()-1;i>=0;i--){
        y=y+x[i];
    }
    cout<<y<<endl;
    if(x==y){
        cout<<"Pelendrome!";
            }
        else if(x!=y){
        cout<<"Not Pelendrome!";
            }
           */
            /*------------------------------------------------------------------------------------------------------------------*/
     
/**/


    cout<<"Linear form :" ;
    str();
    cout<<endl<<"Vovels :" ;
    str1();
    cout<<endl<<"Cases count :" ;
    str2();
    cout<<endl<<"Password Strength :" ;
    str3();
    cout<<endl<<" :" ;
    str4();
    //str5();
    return 0;
}
