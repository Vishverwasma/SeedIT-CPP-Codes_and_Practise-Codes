#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Size : ";
    cin>>n;
    int a[50],x,y;
    cout<<"Array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Set Of :";
    cin>>x;
    cout<<"To Find :";
    cin>>y;
    

    for(int i=0;i<n;i++){

        if(i%x==0 && i!=0){
         cout<<endl;
        }
        if(a[i]==y){
                cout<<"Found It !";
        }
        else{
                cout<<"Not Found !";
            } 
     cout<<a[i]<<" ";    
            
        
        
    }
    
    
    return 0;
}