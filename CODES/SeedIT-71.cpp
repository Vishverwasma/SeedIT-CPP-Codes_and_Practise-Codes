#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Size : ";
    cin>>n;
    int a[50],x;
    cout<<"Array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Set Of :";
    cin>>x;

    for(int i=0;i<n;i++){
        if(i%x==0 && i!=0){
            cout<<endl;
        }
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}