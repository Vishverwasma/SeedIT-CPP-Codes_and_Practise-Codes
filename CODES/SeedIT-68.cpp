#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[n],min,max;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            while(j!=i){
            if(a[i]>a[j]){
                max=a[i];
            }
            else if(a[i]<a[j]){
                min=a[i];
            }
        }
        }
    }
    cout<<"Largest : "<<max<<" Minimum : "<<min;
    return 0;
}