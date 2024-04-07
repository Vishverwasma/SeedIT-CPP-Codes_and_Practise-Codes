#include<iostream>
using namespace std;
int main(){
    int n,a[n],b,c,d=0;
    cout<<"Size :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int num,pos=-1;
    cout<<"Number to search for :";
    cin>>num;
    for(int i=0;i<n;i++){
        if(a[i]==num){
            pos=i;
            break;
        }
    }
    int max=a[0],min=a[pos+1];
    for(int i=0;i<pos;i++){
        if(a[i]>max){
            max=a[i];
        }        
    }
    for(int i=pos+2;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum befor number :"<<num<<" is "<<max<<" and Minimum after :"<<num<<" is "<<min<<" while position of "<<num<<" is "<<pos+1<<endl;
    return 0;
}