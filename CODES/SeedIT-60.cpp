#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n];
    int b,c=0;
    cout<<"Array :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        
            if(a[i]==a[n-1-i]){
                c=c+1;
            }
            
        
    }
    if(c==n){
        cout<<"This array is Pelendrome";
    }
    else if(c!=0){
        cout<<"This array is not a Pelendrome";
    }
    return 0;
}