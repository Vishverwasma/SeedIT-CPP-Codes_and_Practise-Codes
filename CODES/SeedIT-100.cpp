#include<iostream>
using namespace std;

void seq(){
 cout<<"Sequesnce :";
 cout<<endl<<"Input :";
 string s;
 cin>>s;
 string out="",put="";
 for(int i=0;i<s.length();i++){
    for(int j=i;j<i+1;j++){
        out=out+" "+s[i];
        cout<<out<<" "<<endl;
    }
    cout<<" "<<endl;
 }
 cout<<endl;
 for(int i=s.length();i>=1;--i){
    for(int j=0;j<=i;++j){
        cout<<s[j]<<" ";
    }
    cout<<endl;
 } 
 cout<<s[0];
}
void sort(){
  cout<<endl<<"Sorting :"<<endl;
  cout<<"Input :";
  string a;
  char swap=0,twap=0,t,u;
  cin>>a;
  for(int i=0;i<a.length()-1;i++){
   for(int j=i+1;j<a.length();j++){
    if(a[i]>a[j]){
        swap=a[i];
        a[i]=a[j];
        a[j]=swap;
    }
   }
  }
  for(int i=0;i<a.length()-1;i++){
   cout<<a[i];
   cout<<" ";
  }
  
   cout<<endl;
}
void maxmin(){
    string s;
    cout<<"MAX AND MIN :"<<endl;
    cin>>s;
    char max=s[0],min='z';
    int c=0,d=0;
    for(int i=0;i<s.length();i++){
        if(max<s[i]){
            max=s[i];
        }
    
    }
    for(int i=0;i<s.length();i++){
        if(s[i]<min){
            min=s[i];
        }
        
    }
    cout<<"Max in String :"<<max<<" and Min in String :"<<min;
}
void anagram(){
cout<<endl<<"ANAGRAM "<<endl;
string a,b;     int d=0, c=0;
cout<<"Strin 1 :";     cin>>a;
cout<<"String 2 :";    cin>>b;
for (int i=0;i<a.length();i++){
    if(a[i]>a[i+1]){
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
        cout<<a[i]<<" ";
        c=0;
    }
}
for (int i=0;i<b.length();i++){
    if(b[i]>b[i+1]){
        d=b[i];
        b[i]=b[i+1];
        b[i+1]=d;
        cout<<b[i]<<" ";
        d=0;
    }
} 
for (int i=0;i<b.length();i++){
if(a[i]==b[i]){
    c=c+1;;
}
else{
    c=0;
}
}
cout<<endl;
if(c!=0){
    cout<<"Anagram";
}
else if(c==0){
    cout<<"Not An Anagram";
}

}


int main(){
    seq();
    sort();
    maxmin();
    anagram();
    return 0;

}