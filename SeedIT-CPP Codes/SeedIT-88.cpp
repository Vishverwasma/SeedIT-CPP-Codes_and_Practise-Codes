#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Row:";
    cin>>n;
    cout<<"Column:";
    cin>>m;
    int a[50][50],i,j,k,l,c=0;
    k=(m*n)/2;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        if(a[i][j]==0){
          c=c+1;
        }            
        }
    }
        if(c>k){
          cout<<"This is sparse";
        }
        else{
            cout<<"This is not sparse ";
        }
        return 0;
        
    }

