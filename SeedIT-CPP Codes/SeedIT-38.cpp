#include<iostream>
using namespace std;
int main(){
    int a,num=0,sum=0;
    cout<<"Numbers Till :";
    cin>>a;
    while(num<=a){
        if(num%2==0){
            sum=sum+num;
        }
        num++;
    }
    cout<<sum;
}