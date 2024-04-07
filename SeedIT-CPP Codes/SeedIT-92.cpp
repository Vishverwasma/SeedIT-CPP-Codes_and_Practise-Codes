#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"ROW : ";
    cin>>n;
    cout<<"COLUMN : ";
    cin>>m;
    int a[50][50],b,c=0;
    cout<<"Elements : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];                                       //1 2 3
        }                                                       //2 5 8
    }                                                           //7 8 9
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==j){
       c=a[i][j];
       a[i][j]=a[i][m-j-1];
       a[i][m-j-1]=c;
    }
    }
   } 
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];                                       //1 2 3
        }    
        cout<<endl;                                                   //2 5 8
    }
   

    return 0;
}