#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n],c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==a[n-i-1]){
            c=c+1;
        }
    }
    if(c==n){
        cout<<"The Array is Pelendrome.";
    }
    else if(c!=0){
        cout<<"The Array is not a Pelendrome.";
    }
    return 0;
}