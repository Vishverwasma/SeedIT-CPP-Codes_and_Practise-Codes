#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"ROW : ";
    cin>>n;
    cout<<"COLUMN : ";
    cin>>m;
    int a[50][50],b=0,c=0;
    cout<<"Elements : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];                                       //1 2 3
        }                                                       //2 5 8
    }                                                           //7 8 9
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
{
     if(i==j){
        c=c+a[i][j];;
     }
     if(i+j==2){
        b=b+a[i][j];;
     }
}   
}  
cout<<"Sum of Minor Diagonal : "<<b<<" major Diagonal : "<<c<<endl;

    return 0;
}