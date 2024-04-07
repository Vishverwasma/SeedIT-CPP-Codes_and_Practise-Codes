#include<iostream>
using namespace std;
class Array{
     int a[5];
     public:
     void input(){
        cout<<"Array : ";
        for(int i=0;i<5;i++){
            cin>>a[i];
            cout<<" ";
        }
     }
     void sum(Array a2){
        int sum=0;
        cout<<"Sum Of Two Arrays : ";
        for(int i=0;i<5;i++){
            sum=a[i]+a2.a[i];            
        cout<<sum<<" ";
        sum=0;
        }
     }
};
int main(){
    Array a1,a2;
    a1.input();
    a2.input();
    a1.sum(a2);
    return 0;
}