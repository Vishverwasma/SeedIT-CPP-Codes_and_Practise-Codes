#include<iostream>
using namespace std;
class Matrix{
     int a[3][3];
     public:
     void inpout(){
        cout<<"Matrix : ";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
                cout<<" ";
            }
            cout<<endl;
        }
     }
     void add(Matrix m2){
          int ad=0,i,j;
          for(i=0;i<3;i++){
           for(j=0;j<3;j++){ 
            ad=a[i][j]+m2.a[2-i][j];
            cout<<ad<<" ";
           }
           cout<<" "<<endl;
          }
          
     }
};
int main(){
   Matrix m1,m2;
   m1.inpout();
   m2.inpout();
   m1.add(m2);
}