#include<iostream>
#include<math.h>
using namespace std;

int swap(int n){
    int a=n,b,c=0,d,e,f,g,h,i,j;
    while(a!=0){
        b=a%10;
        a=a/10;
    }                                   
    i=b*pow(10,(sizeof(n)-1));          
    g=n%10;
    h=n-g;
    f=h-i;
    e=g*pow(10,(sizeof(n)-1));
    j=e+b+f;
    return j;

}

int main(){
    int num;
    cout<<"The number whose first and last digit are to be swapped is :";
    cin>>num;
    cout<<" The swapped output we recieve is :"<<swap(num);
    return 0;

}