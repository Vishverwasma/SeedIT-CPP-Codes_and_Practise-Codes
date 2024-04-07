#include<iostream>
using namespace std;

void Prime(){
    int a,b,c=0;
    cin>>a;
    for(b=1;b<=a/2;b++){
        if(a%b==0){
            c=c+1;
        }
    }
    if(c>1){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
    
}
int main(){
    cout<<"Prime Numbers:";
    Prime();
    return 0;
}