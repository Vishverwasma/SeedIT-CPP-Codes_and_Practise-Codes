#include<iostream>
using namespace std;

struct demo{
     int a;
};

int main(){
    demo d;
    cin>>d.a;
    if(d.a%2==0){
        cout<<"even!";
    }
    else{
        cout<<"odd!";
    }
    return 0;
}