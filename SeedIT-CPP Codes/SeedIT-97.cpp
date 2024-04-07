#include<iostream>
using namespace std;
int main(){
    int n,m,p,o;
    cout<<"Matrix 1 : "<<endl;
    cout<<"Row : ";
    cin>>m;
    cout<<"Column : ";
    cin>>n;
   /* cout<<"Matrix 2 : "<<endl;
    cout<<"Row : ";
    cin>>o;
    cout<<"Column : ";
    cin>>p;
*/

    int a[50][50], b , c=0;
    int i,j;
    cout<<"Matrix :";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             if(i!=j){
                if(a[i][j]==0){
                    c=c+1;
                }
                else if(a[i][j]!=0){
                    c=0;
                }
             }
        }
    }
    if(c!=0){
        cout<<"Identity Matrix !";
    }
    else if(c==0){
        cout<<"Not Identity Matrix !";
    }
    return 0;

    
}