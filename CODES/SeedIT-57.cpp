#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n],b,c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-c;i++){
        if(a[i]==a[i+1]){
            for(int j=i;j<n-1-c;j++){
                a[j]=a[j+1];
                
            }
            c=c+1;
        }
       }
       
        for(int k=0;k<n-c;k++){
        cout<<a[k]<<" ";
    }
    return 0;
}