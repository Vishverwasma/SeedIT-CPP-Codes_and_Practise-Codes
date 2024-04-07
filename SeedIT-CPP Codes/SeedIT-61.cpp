#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n],i,b,c=0;
    cout<<"Array : ";
        for(i=0;i<n;i++){
        cin>>a[i];
        }
        while(a[i]!=0){
            b=a[i]/10;
            a[i]=a[i]/10;
            c=c+b;
            }
            
        cout<<"Sum is : "<<c;
        return 0;
        }