/* Question : Program To Multiply Two Matrices ! */

#include<iostream>
using namespace std;

int main(){
    int m,n,o,p;
    cout<<"Matrix 1 : "<<endl;
    cout<<"Row : ";
    cin>>m;
    cout<<"Column : ";
    cin>>n;
    cout<<"Matrix 2 : "<<endl;
    cout<<"Row : ";
    cin>>o;
    cout<<"Column : ";
    cin>>p;
    int a[50][50] , b[50][50] , c=0 , d=0 , sub=0 , i , j , k , l;
    cout<<"Matrix 1 : "<<endl;
 
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
            }
    }
    cout<<"Matrix 2 : "<<endl;
    for(k=0;k<o;k++){
        for(l=0;l<p;l++){
            cin>>b[k][l];
        }
    }
      for(i=0;i<m;i++){
        for(k=0;k<n;k++){
          sub=a[i][k]-b[i][k];
          cout<<sub<<" ";
          sub=0;
      }
      cout<<endl;
     }
    return 0;

}
