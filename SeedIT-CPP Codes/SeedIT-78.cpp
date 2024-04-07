#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of Rows :";
    cin>>n;
    cout<<"No. of Columns :";
    cin>>m;
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}