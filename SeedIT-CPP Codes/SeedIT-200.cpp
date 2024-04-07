#include<bits/stdc++.h>
using namespace std;
class Matrix{
     int a[3][3],sum=0;
     public:
     Matrix(){}

     Matrix(int b[][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j]=b[i][j];
            }
        }
     }

     void Sum(){
         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j || i+j%2==0){
                    sum=sum+a[i][j];
                }
            }
         }
     }
     
     Matrix Compare(Matrix m2,Matrix m3){
        cout<<"sum1="<<sum<<"\n";
        cout<<"sum1="<<m2.sum<<"\n";
        cout<<"sum1="<<m3.sum<<"\n";
        
        if(m2.sum>sum && m2.sum>m3.sum){
            return m2;
        }
        else if(m3.sum>sum && m3.sum>m2.sum){
            return m3;
        }
        else{
            return *this;
        }
     }
    
    void display(){
        cout<<endl;
        cout<<endl;
        cout<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"::::"<<sum;
    }

};
int main(){
    int x[3][3] ,y[3][3] ,z[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cin>>x[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>y[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>z[i][j];
        }
    }
    Matrix m1(x),m2(y),m3(z),m4;
    m1.Sum();
    m2.Sum();
    m3.Sum();
    m4=m1.Compare(m2,m3);
    m4.display();
}