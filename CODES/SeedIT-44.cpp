#include<iostream>
using namespace std;
int rev(int n){
    int a,b=0;
    while(n!=0){
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    return b;
}
int main(){
    int number;
    cout<<"Your Number To reverse :";
    cin>>number;
    cout<<"Reverse Of Number is :"<<rev(number);
    return 0;
}