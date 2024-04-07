#include<iostream>
using namespace std;
int next(int n){
    int a=n,b,c=0,d;
    while(true){
        a++;
        for(b=1;b<=a/2;b++){
        if(a%b==0){
            c=c+1;
        }
    }
    
    if(c==1){
        
    return a;
    }
    c=0;
    }    
}
int main(){
int l;
cout<<"Your Number :";
cin>>l;
cout<<"Next Prime Number :"<<next(l)<<endl;
return 0;
}