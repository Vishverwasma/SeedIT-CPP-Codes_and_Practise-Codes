#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size : ";
    cin>>n;
    int a[n],b=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1] && a[i]>a[i-1]){
        cout<<a[i]<<endl;
        }
         
    }
    
    return 0;
}