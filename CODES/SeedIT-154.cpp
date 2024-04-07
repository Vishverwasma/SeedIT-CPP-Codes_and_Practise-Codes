#include<iostream>
using namespace std;
//Multiple Inheritance!
class A{
    protected:
     int mata[50][50];
     public:
     
     int rows1,cols1;
    void inout1(){
        cout<<endl;
        cout<<"Matrix Size : ";
        cout<<"Rows :";
        cin>>rows1;
        cout<<"Columns :";
        cin>>cols1;
        for(int i=0;i<rows1;i++){
            for(int j=0;j<cols1;j++){
               cin>>mata[i][j];
            }

        }
    }
};
class B{
     protected:
     int matb[50][50];
     public:
     
     int rows2,cols2;
    void inout2(){
        cout<<endl;
        cout<<"Matrix Size : ";
        cout<<"Rows :";
        cin>>rows2;
        cout<<endl<<"Columns :";
        cin>>cols2;
        for(int i=0;i<rows2;i++){
            for(int j=0;j<cols2;j++){
               cin>>matb[i][j];
            }

        }
    }
};
class C:public A,public B
{
    public:
     void common(){
        cout<<endl<<"Common Elements are : ";
        for(int i=0;i<rows2;i++){
            for(int j=0;j<cols2;j++){
               for(int k=0;k<rows1;k++){
                  for(int l=0;l<cols1;l++){
                      if(mata[i][j]==matb[k][l]){
                        cout<<mata[i][j]<<" ";
                      }
            }

        }
      }

    }
}
};
int main(){
    C ce;
    ce.inout1();
    ce.inout2();
    ce.common();
}