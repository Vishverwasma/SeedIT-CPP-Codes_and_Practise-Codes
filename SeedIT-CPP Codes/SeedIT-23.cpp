#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Please enter sides for your triangle"<<endl;
    cout<<"Side 1 :";
    cin>>s1;
    cout<<"Side 2 :";
    cin>>s2;
    cout<<"Side 3 :";
    cin>>s3;
    if(s1<s2+s3 && s2<s1+s3 && s3<s1+s2){
        cout<<"This is a valid triangle";
    }
    else{
        cout<<"This is not a Valid Triangle";
    }
    return 0;
}