#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Rows : ";
    cin>>n;
    cout<<"Columns : ";
    cin>>m;
    int a[50][50],b,c=0,d=0;
    if(n==m){
        cout<<"Element :";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j){
                if(a[i][j]!=0){
                    c=c+1;
                }
                }
                else if(i!=j){
                    if(a[i][j]==0){
                        d=d+1;
                    }
                }

            }
        }
         
    }
    if(c+d==n*m){
        cout<<"Identity Matrix !";

    }
    else{
       cout<<"Not Identity Matrix !"; 
    }
    return 0;
}