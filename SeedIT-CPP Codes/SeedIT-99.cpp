#include<iostream>
using namespace std;

void str(){
    string name;
    int c=0;
cin>>name;
for(int i=0;i<name.length();i++){
  if(name[i]!='A' || name[i]!='E' || name[i]!='I' || name[i]!='O' || name[i]!='U' || name[i]!='a' || name[i]!='e' || name[i]!='i' || name[i]!='o'|| name[i]!='u' ){
    c=0;
  }
  else if(name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U' || name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o'|| name[i]=='u' ){
    c=c+1;
}
}
if(c>0){
    cout<<"Vovles Present ";
}
else{
    cout<<"No Vovels";
}
}
void count(){
    cout<<endl;
    string s;
    cin>>s;
    char f;
    cout<<endl<<"To Find :";
    cin>>f;
    int c=0,d=0;
    for(int i=0;i<s.length();i++){
        if(f==s[i]){
          c=c+1;
        }
        if(c==0){
            d=d+1;
        }
    }
    cout<<"The Number Of Times "<<f<<" Occured is "<<d;
}
/*void comp(){
    cout<<endl;
    int c=0,d=0;
    string c1,c2;
    cout<<"Char 1 ";
    cin>>c1;
    cout<<endl<<"Char 2 ";
    cin>>c2;
    cout<<"Repeated Character :";
    for(int i=0;i<c1.length();i++){
     if(c1[i]==c2[i]){
            c=c+1;
        }
     else{
        c=0;
     }
     if(c!=0){
            d=d+1;;
        }
     else{
        d=0;
     }
    }
    cout<<d<<endl;
}*/
int main(){
    str();
    count();
    return 0;
}