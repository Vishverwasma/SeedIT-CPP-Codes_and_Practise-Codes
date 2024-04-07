#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    int n[50],sum;
    int m;
    cout<<"Number of Element : ";
    cin>>m;
    for(int i=0;i<m;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>n[i];
        s.push(n[i]);
    }
    while(!s.empty()){
          sum=sum+s.top();
          s.pop();
    }
    cout<<"Sum Of Top Elements Are : "<<sum;
}