#include<iostream>
using namespace std;
int NextPele(int n){
    int i,l=n,j,m,k=0,z;
    while(true){
        l++;
        z=l;
         while(l!=0){
            j=l%10;
            k=k*10+j;
            l=l/10;
        }
        //cout<<k;
    if(k==z){
            return k;
        }
        l=z;
        k=0;
    }
}
  

int main(){
    int m;
    cout<<"Number : ";
    cin>>m;
    cout<<"Answer is :"<<NextPele(m);
    return 0;
}