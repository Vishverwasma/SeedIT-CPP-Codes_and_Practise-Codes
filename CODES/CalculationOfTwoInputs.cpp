#include<iostream>
using namespace std;
int main(){
    int a,b,sum,sub,mul;
    float div;
    cout<<"Your input :";
    cin>>a>>b;
    sum=a+b;
    mul=a*b;
    if(a>b){
        sub=a-b;
        div=a/b;
    }
    else{
        sub=b-a;
        div=b/a;
    }
    cout<<sum<<endl<<sub<<endl<<mul<<endl<<div<<endl;
    cout<<"Have a Nice day!"<<endl;
    return 0;

}