#include<iostream>
using namespace std;
//Multilevel Inheritance!!
class Data{
    protected:
     int a[50],n;
     public:
     void input(){
        cout<<"Size Of Array : ";
        cin>>n;
        cout<<endl<<"Your Elements of Array : ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
     }
};
class Data1:public Data{
     protected:
     int max,min;
     public:
     void maxi(){
        max=0;
        for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        }
        
     }
     void mini(){
        min=a[0];
        
        for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        }
     }
};
class Data2:public Data1{
     public:
     void toPrint(){
        cout<<"Max is : "<<max<<"  and Min is   "<<min<<endl;
     }
};
int main(){
    Data2 d;
    d.input();
    d.maxi();
    d.mini();
    d.toPrint();
    return 0;
}