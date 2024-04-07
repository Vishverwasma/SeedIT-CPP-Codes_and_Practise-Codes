//True and False if the sum of element and extra outside element is equal or greater than the max element !
#include<vector>
#include<iostream>
using namespace std;
int main(){
     int x,y,z;
     int c;
     vector <bool> u;
     vector <int> v,w;
     cout<<"Number of Elements : ";
     cin>>x;
     cout<<endl<<"Elements are : ";
     for(int i=0;i<x;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>y;
        v.push_back(y);
     }
     int max=v[0];
     for(int i=0;i<x;i++){
        if(v[i]>max){
            max=v[i];
        }
     }
     cout<<"Your Extre Element : ";
     cin>>z;
     for(int i=0;i<x;i++){
        w.push_back(z+v[i]);
        }
    for(int i=0;i<x;i++){
        if(w[i]>=max){
            c=1;
            u.push_back(true);
        }
        else if(w[i]<max){
            c=0;
            u.push_back(false);
        }
        if(u[i]==1){
            cout<<"True ";
        }
        else if(u[i]==0){
            cout<<"False ";
        }
        //cout<<endl<<u[i]<<" ";
     }
     return 0;
}