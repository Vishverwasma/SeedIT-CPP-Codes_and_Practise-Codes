#include<iostream>
using namespace std;
void Primes(int a, int b){
    int d,e;
    if(a>b){
        d=a;
        e=b;
    }
    else{
        d=b;
        e=a;
    }
    int i,j,k=0;
    for(i=e;i<=d;i++){
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                k=k+1;
            }
        }
    
    if(k==1){
        cout<<i<<endl;
    }
    k=0;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    Primes(a,b);
    return 0;
}