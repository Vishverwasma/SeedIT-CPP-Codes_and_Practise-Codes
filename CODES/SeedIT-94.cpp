#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"ROW : ";
    cin>>n;
    cout<<"COLUMN : ";
    cin>>m;
    int a[50][50],d[50][50],b=0,c=0;
    cout<<"Elements : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];                                      
             }
    }
       cout<<"Next :";
            for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>d[i][j];
            }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(a[i][j]%d[i][j]==0 && a[i][j]==d[i][j]){
            b=b+1;
        }        
        else{
            b=0;
        }
        }
    }
    if(b!=0){
        cout<<"EQUAL";
    } 
    else{
        cout<<"NOT EQUAL";
    }


    return 0;
}