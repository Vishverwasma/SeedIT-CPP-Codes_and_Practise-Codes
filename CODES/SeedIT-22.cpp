#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter the sides Length :"<<endl;
    cout<<"Side 1 :";
    cin>>s1;
    cout<<"Side 2 :";
    cin>>s2;
    cout<<"Side 3 :";
    cin>>s3;
    if(s1==s2 && s2==s3){
        cout<<"Thats an Equilateral triangle";
    }
    else if(s1==s2 || s2==s3 || s1==s3){
        cout<<"Thats an Isosceles Triangle";
    }
    else{
        cout<<"Thats an Scalene Trianggle";
    }
    return 0;
}