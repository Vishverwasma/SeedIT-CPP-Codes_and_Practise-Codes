#include<iostream>
#include<math.h>
using namespace std;
int func(int n){
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int m=a[0];
   for(int i=0;i<n;i++){
   if(a[i]>m){
    m=a[i];
   }
   }
   return m;
}
int main(){
    int n;
    cout<<"Number is : ";
    cin>>n;
    cout<<" Answer is :"<<func(n);
    return 0;
}