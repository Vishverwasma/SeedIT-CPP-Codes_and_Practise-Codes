#include<iostream>
using namespace std;

void tn(){
    cout<<endl<<" Total Number Of Characters ! ";
    string a;
    int b=0,c=0,d=0,e=0;
    cout<<endl<<"Your Input :- ";
    cin>>a;
    for(int i=0;i<a.length();i++){
         if(a[i]>=65 && a[i]<=90){
            b=b+1;
        }
        else if(a[i]>=97 && a[i]<=122){
            c=c+1;
        }
        else if(a[i]>=48 && a[i]<=57){
            d=d+1;
        }
        else{
            e=e+1;
        }
}
cout<<endl<<"Upper Case :" <<b<<endl<<"Lower Case :"<<c<<endl<<"Numbers :"<<d<<endl<<"Symbols :"<<e;
cout<<endl;
}

void tm(){
    cout<<endl<<"Vovels and Consonents ";
    string f;
    int vov=0,con=0;
    cout<<endl<<"Your Input :";
    cin>>f;
    for(int i=0;i<f.length();i++){
        if(f[i]=='a' || f[i]=='e' || f[i]=='i' || f[i]=='o' || f[i]=='u' || f[i]=='A' || f[i]=='E' || f[i]=='I' || f[i]=='O' || f[i]=='U'){
            vov=vov+1;
        }
        else{
            con=con+1;
        }
    }
    cout<<"Number of Vovel are : "<<vov<<" and Consonent are : "<<con<<endl;
    cout<<endl;
}
void tb(){
    string g;
    cout<<"To Find Reverse :";
    cin>>g;
    for(int i=g.length();i>=0;i--){
        cout<<g[i]<<" ";
    }
}
void tv(){
    cout<<endl<<"Pelendrome : ";
    string h;
    cin>>h;
    int c=0,d=0;
    for(int i=0;i<h.length();i++){
     for(int j=h.length();j>=0;j--){
        if(h[i]==h[j]){
            c++;
        }
        else{
            c=0;
        }
     }
    }
    if(c!=0){
        cout<<"Pelendrome !";
    }
    else if(c==0){
        cout<<"Not Pelendrome !";
    }
    }
void tc(){
    string k;
    cout<<endl<<"To reverse : "<<endl;
    cout<<"String is : ";
    cin>>k;
    for(int i=k.length()-1;i>=0;i--){
        cout<<k[i];
    }
}
void tx(){
    string l;
    cout<<endl<<"Revese only words and not nums : ";
    cout<<endl<<"String is : ";
    cin>>l;
    for(int i=l.length()-1;i>=0;i--){
           cout<<l[i];
           }   
}
void tz(){
    cout<<endl;

   string m;
   char n;
   int z=0;
   cout<<endl<<"Occurance of Element : "<<endl;
   cout<<endl;

   cin>>m;
   cout<<"To Find Occurance of Element : ";
   cin>>n;
   for(int i=0;i<m.length();i++){
    if(n!=m[i]){
          z=i+1;
          break;
    }
   }

    if(z==0){
cout<<"Not Found";
   }
   else if(z!=0){
   cout<<z;
   }
   }
    

int main(){
    tn();
    tm();
    tb();
    tv();
    tc();
    tx();
    tz();
    return 0;
}