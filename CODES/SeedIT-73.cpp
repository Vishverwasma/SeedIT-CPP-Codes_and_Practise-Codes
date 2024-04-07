#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Size : ";
    cin>>n;
    int a[50],x,max=0,min=1000000;
    cout<<"Array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Set Of :";
    cin>>x;
    

    for(int i=0;i<n;i++){
        
        
     if(i%x==0 && i!=0){
           
        
          cout<<" max : "<<max<<" min : "<<min<<endl;
        min=100000,max=0;
        }
        
        if(a[i]>max){
            max=a[i];
        }
        
        if(a[i]<min){
            min=a[i];
        } 
    cout<<a[i]<<" ";
    }
    
    
    return 0;
}