#include<iostream>
using namespace std;
int main(){
    int n,i,b,c=0;
    cout<<"Size of Array :";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        while(a[i]!=0){
            b=a[i]%10;
            a[i]=a[i]/10;
        }
        c=c+b;
    }
    cout<<"Sum is : "<<c;
    return 0;
}