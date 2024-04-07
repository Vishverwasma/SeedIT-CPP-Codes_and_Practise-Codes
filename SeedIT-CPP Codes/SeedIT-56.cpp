#include<iostream>
using namespace std;
int main(){
    int n,b,i,j,c=0;
    cout<<"size: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"To remove :";
    cin>>b;
   for(i=0;i<n;i++){
    if(a[i]==b){
        for(j=i;j<n-1;j++){
            a[j]=a[j+1];
        }
    }
   }
   for(i=0;i<n-1;i++){
    cout<<a[i];
       }
    return 0;
}