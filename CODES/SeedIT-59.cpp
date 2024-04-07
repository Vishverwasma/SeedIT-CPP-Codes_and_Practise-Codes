#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n];
    int b,c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-c;i++){
         for(int j=i+1;j<n-c;j++){
        if(a[i]==a[j]){
            for(int k=j;k<n-1-c;k++){
                a[k]=a[k+1];
                c=c+1;
            }
        }
    }
    }
    for(int i=0;i<n-c;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}