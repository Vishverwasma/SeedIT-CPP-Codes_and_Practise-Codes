#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n],swap=0,m,o=0,p=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
                }                           
        }
    }
   for(int i=0;i<n;i++){
     cout<<a[i]<<endl;
   }
    for(int i=0;i<n-1;i++){
        m=a[i+1]-a[i];
        if(m!=0 && m!=1){
         o=a[i]+1;
        }
        if(m==0){
         p=p+1;
        }
    }
    
    cout<<"With Missing Elements :"<<o<<endl;
   
        cout<<"Repeating numbers :"<<p;
    
    return 0;
}