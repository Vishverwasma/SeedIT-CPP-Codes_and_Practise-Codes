#include<iostream>
using namespace std;
class Data{
    protected:
     int a[50],n;
     public:
    void inout(){
        cout<<"Size Of Array : ";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Element "<<i<<" : ";
            cin>>a[i];
        }
        
    }
};
class minmax:public Data{
     
     public:
    void min(){
        int min=a[0];
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
            }
        }
        cout<<min<<" is the Minimum Element ! "<<endl;
    }
    void max(){
        int max=0;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        cout<<max<<" is the Maximum Element ! "<<endl;
    }
};
int main(){
    minmax mm;
    mm.inout();
    mm.min();
    mm.max();
    return 0;
}