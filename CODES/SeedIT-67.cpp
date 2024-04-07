#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n],b,c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1] && a[i]>a[i-1]){
            cout<<a[i]<<endl;
        }
    }
    return 0;
}