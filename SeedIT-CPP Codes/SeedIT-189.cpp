#include<iostream>
using namespace std;
template <class T>
//Program to find max out of an array while one object is of INT and Other One is OF FLOAT !!
class MaxOfThis{
     T a[5],max;
     int l;
     public:
     void input(){
        cout<<"Limit : ";
        cin>>l;
        cout<<"Input : "<<endl;
        for(int i=0;i<l;i++){
            cin>>a[i];
        }
     }
     void maxi(){
     max=0;
     cout<<"Output : "<<endl;
     for(int i=0;i<l;i++){
       if(a[i]>max){
        max=a[i];
       }
     }
     cout<<max<<endl;;
}
};
int main(){
    MaxOfThis<int> x1;
    MaxOfThis<float> x2;
    x1.input();
    x1.maxi();
    x2.input();
    x2.maxi();
}