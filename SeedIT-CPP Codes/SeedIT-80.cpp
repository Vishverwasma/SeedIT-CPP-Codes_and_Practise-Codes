#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of Rows : ";
    cin>>n;
    cout<<"No. of Columns : ";
    cin>>m;
    int a[50][50],i,j,c=0;
    cout<<" Elements :";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        if(a[i][j]!=a[j][i]){
            c=c+1;
        }
    }
   }
   if(c==0){
    cout<<"YES !";
   }
   else{
    cout<<"NO !";
   }
    return 0;
}