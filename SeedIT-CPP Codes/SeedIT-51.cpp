#include<iostream>
#include<math.h>
using namespace std;
int func(int n){
    int a[n];
    int m=a[0];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
        return m;
    }
}int main(){
    int a;
    cout<<"Number :";
    cin>>a;
    cout<<func(a);
    return 0;
}