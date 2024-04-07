#include<iostream>
using namespace std;
struct sort{
     int r;
     string n;
     float m;
};
int main(){
    sort s[5];
    sort t;
    int x,sm=0;
    string sn="";
    cout<<"Of Size : ";
    cin>>x;
    cout<<endl;
    for(int i=0;i<x;i++){
        cout<<"Input For : "<<i+1<<endl;
        cin>>s[i].r>>s[i].n>>s[i].m;
        cout<<endl;
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(s[i].m<s[j].m){
                t=s[j];
                s[j]=s[i];
                s[i]=t;
               
            }
        }
        cout<<s[i].n<<" "<<s[i].m<<" , ";
    }
    return 0;
}