#include<vector>
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Number of Elements : ";
    cin>>x;
    vector <int> u,v;
    for(int i=0;i<x;i++){
        cin>>y;
        v.push_back(y);
    }
    for(int i=0,j=x/2;i<x/2,j<x;i++,j++){
        cout<<v[i]<<" ";
        cout<<v[j]<<" ";
    }
return 0;
}