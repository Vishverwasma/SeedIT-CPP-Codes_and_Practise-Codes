#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<" Cost Price : ";
    cin>>cp;
    cout<<"Selling Price : ";
    cin>>sp;
    if(cp>sp){
        cout<<"Loss of " << cp-sp;
    }
    else if(cp<sp){
        cout<<"Profit of " << sp-cp;
    }
    else{
        cout<<"No Profit No Loss";        
    }
    return 0;
}