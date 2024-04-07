#include<vector>
#include<iostream>
using namespace std;
int main(){
    int x,y,z,sum=0;
    vector <int> u,v;
    cout<<"Number of Element : ";
    cin>>x;
    for(int i=0;i<x;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>y;
        u.push_back(y);
    }
    cout<<endl<<"Output where the element of next vector is sum of all earlier vector to the indices of last vector : ";
    for(int i=0;i<x;i++){
       sum=sum+u[i];
       v.push_back(sum);
       cout<<v[i]<<" ";    
    }
    return 0;
}