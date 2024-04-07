#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of Rows : ";
    cin>>n;
    cout<<"No. of Columns : ";
    cin>>m;
    int a[50][50],sum=0,sum1=0,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==j){
                sum=sum+a[i][j];
            }
            else if(i+j==2){
                sum1=sum1+a[i][j];
            }
        }
    }
    cout<<"Sum of Diagonals :"<<endl;
    cout<<"Diagonal 1 :"<<sum<<endl;
    cout<<"Diagonal 2 :"<<sum1<<endl;
    return 0;
}