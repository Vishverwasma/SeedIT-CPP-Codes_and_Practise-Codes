#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Row : ";
    cin>>n;
    cout<<"Column : ";
    cin>>m;
    int a[50][50],i,j,c=0;
    if(n!=m){
        cout<<"This matrix doesnt satify the condition to be a symmetric matrix !";
    }
    else{
        cout<<"Elements :";
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        c=1;
        cout<<endl<<"Matrix Form :"<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<a[i][j];

         if(a[i][j]!=a[j][i]){
            c=0;
        }
            }
            cout<<endl;
        }
        cout<<endl<<"Transpose :"<<endl;
        
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<a[j][i];
                 
               
            }
            cout<<endl;
        }
        
    }
    if(c!=0){
        cout<<"Symmetrix"<<endl;

    }else if(c==0){
        cout<<"Not Symmetric"<<endl;
    }
    return 0;
}