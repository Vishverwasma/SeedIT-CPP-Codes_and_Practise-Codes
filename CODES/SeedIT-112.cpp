#include<vector>
#include<iostream>
using namespace std;
int main(){
    int i,y,z;
    vector <int> x,w;
    cout<<"Number Of Elements : ";
    cin>>z;
    for(i=0;i<z;i++){
        cout<<"Element "<<i<<" ";
        cin>>y;
        x.push_back(y);
    }
    cout<<"Reverse Of this Vector is : ";
    for(i=z-1;i>=0;i--){
        w.push_back(x[i]);
    }
    for(i=0;i<z;i++){
        cout<<w[i]<<" ";
    }
      
    return 0;
}