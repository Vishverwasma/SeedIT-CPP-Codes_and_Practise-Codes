#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Matrix 1 and 2 have equla elements : ";
    cout<<"No. of Rows : ";
    cin>>n;
    cout<<"No. of Columns : ";
    cin>>m;
    int l=n,k=m;
    int a[50][50],b[50][50],i,j,o,p,sum=0;
    cout<<" Elements for first matrix :";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<" Elements for second matrix :";
    for(i=0;i<l;i++){
        for(j=0;j<k;j++){
            cin>>b[i][j];
        }
    }
   
   for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
           
        }
        cout<<" : "<<endl;
        
    }
    cout<<"------------"<<endl;
    for(i=0;i<l;i++){
        for(j=0;j<k;j++){
            cout<<b[i][j]<<" ";
           
        }
        cout<<" : "<<endl;
        
    }
    cout<<"------------"<<endl;

    /*for(i=0,j=0;i<n,j<l;i++,j++){
        for(o=0,p=0;o<m,p<k;o++,p++){
            sum=sum+a[i][o]+b[j][p];
        }
        cout<<sum<<" ";
        sum=0;
    }*/
    for(i=0,j=0;i<n,j<l;i++,j++){
        for(o=0,p=0;o<m,p<k;o++,p++){
          if(i==j && o==p){
            sum=sum+a[i][o]+b[j][p];
            cout<<sum<<" ";
          }
          sum=0;
        }
        cout<<endl;
          
          sum=0;
    }
    
    
    return 0;
}
