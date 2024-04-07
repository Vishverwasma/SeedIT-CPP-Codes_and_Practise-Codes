#include<vector>
#include<iostream>
using namespace std;
int main(){
    int i;
    vector <int> v;
    v.push_back(100);
    v.push_back(250);
    v.push_back(150);
    v.push_back(365);
    v.push_back(31);
    v.push_back(64);
    int max=v[0];
    cout<<"Out of Elements of this Vector : ";
    for(i=0;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
        cout<<v[i]<<" ";
    }
    cout<<"Max Sized Element is : "<<max;
    return 0;
}