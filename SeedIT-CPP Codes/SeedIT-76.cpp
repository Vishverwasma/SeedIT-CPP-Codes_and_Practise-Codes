#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[50],z=0,x=0,b,p;
    cout<<"To Find :";
    cin>>b;
    
    cout<<"Elements :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Number of sets :";
    cin>>p;
    for(int i=0;i<n;i++){
        if(i%p==0 && i!=0){
            if(z==0){
                x=1;
            }
            z=0;
            cout<<endl;
        }
        cout<<a[i]<<" ";
        if(a[i]==b){
            z=z+1;
        }
    }
    if(z==0){
        x=1;
    }
    if(x==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}