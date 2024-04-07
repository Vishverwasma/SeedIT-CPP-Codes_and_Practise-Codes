#include<iostream>
using namespace std;
int mgcnum(int a){
    int i=a,j=0,k=0,l,m,n,o,p;
    while(true){
        i++;
        l=i;
        while(i!=0){
            m=i%10;
            j=j+m;
            i=i/10;
        }
        o=j;
        while(j!=0){
            n=j%10;
            k=k*10+n;
            j=j/10;
        }
        p=k;
        if(o*p==l){
            return l;
          }
        
            i=l;
            j=0;
            k=0;
        
    }   
}
int main(){
    int a;
    cout<<"Number :";
    cin>>a;
    cout<<"Answer :"<<mgcnum(a);
    return 0;
}