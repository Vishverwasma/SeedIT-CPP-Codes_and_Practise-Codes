#include<vector>
#include<iostream>
using namespace std;
int main(){
    int i,z,x;
    vector <int> v;
    vector <int> u;
    cout<<"Number Of Elements : ";
    cin>>z;
    for(i=0;i<z;i++){
        cout<<"Element "<<i+1<<" ";
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<z;i++){
        u.push_back(v[i]);
        cout<<"Element of u["<<i+1<<"] : "<<u[i]<<endl;
    }
return 0;
}