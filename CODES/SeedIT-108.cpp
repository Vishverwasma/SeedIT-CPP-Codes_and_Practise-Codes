#include<vector>
#include<iostream>
using namespace std;
int main(){
    int i;
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
    }