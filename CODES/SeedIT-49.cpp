#include<iostream>
#include<math.h>
using namespace std;
int sum(int n){
 int a=n,b,c=0;
 while(a!=0){
    b=a%10;

    a=a/10;
 }
 return b+n%10;
}

int main(){
    int num;
    cout<<"Number :";
    cin>>num;
    cout<<"Sum is :"<<sum(num)<<endl;
    return 0;
}