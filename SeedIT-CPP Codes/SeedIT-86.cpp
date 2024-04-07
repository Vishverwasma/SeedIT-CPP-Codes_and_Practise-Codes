#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of Rows : ";
    cin>>n;
    cout<<"No. of Columns : ";
    cin>>m;
    int a[50][50],i,j,sum1=0,sum=0;
    cout<<" Elements :";
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
    cout<<"-------------"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i!=j){
                if(i<j){
                    sum=sum+a[i][j];
                }
                else if(i>j){
                    sum1=sum1+a[i][j];
                }
            }
        }
    }
    
            cout<<sum<<" "<<sum1<<endl;
    return 0;
}