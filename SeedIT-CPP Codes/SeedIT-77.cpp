#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[50],b=0,max1=0,max=0,maxi,sum=0;
    
    cout<<"Elements :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  for(int k=0;k<n;k++){
    for(int i=0;i<n-3;i++){
        b=a[i]+a[i+1]+a[i+2];
       sum=sum+b;
       if(sum>max){
        max1=sum;
       }
       /*else{
        max=max;
       }*/
       sum=0,b=0;
    }
    for(int j=n-3;j<n;j++){
        b=a[j]+a[j+1]+a[j+2];
    sum=sum+b;
    if(sum>max){
        max=sum;
       }
       /*else{
        max=max;
       }*/
    sum=0,b=0;
       }
       if(max>max1){
        maxi=max;
       }
       else{
        maxi=max1;
       }
  }
    cout<<"Max Sum :"<<maxi;
    return 0;
}