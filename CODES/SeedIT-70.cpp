#include<iostream>
using namespace std;
int main(){
    int n,a[50],i,j,swap=0;
    cout<<"Size :";
    cin>>n;
    cout<<" Array :";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
    swap=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=swap;
    swap=0;
    cout<<a[i]<<endl;
    }

return 0;

}