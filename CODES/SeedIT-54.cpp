#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n],b,c,d=0,e=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int num,pos=-1;
    cout<<"Number to search for :";
    cin>>num;
    for(int i=0;i<n;i++){
        if(a[i]==num){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<"Not Found";
    }
    else{
        cout<<pos+1;
    }
    return 0;
}