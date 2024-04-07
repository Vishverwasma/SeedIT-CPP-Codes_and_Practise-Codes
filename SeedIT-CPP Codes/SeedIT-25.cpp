#include<iostream>
using namespace std;
int main(){
    float ang1,ang2,ang3;
    cout<<"Please Input The Angles:"<<endl;
    cout<<"Angle 1 :";
    cin>>ang1 ;
    cout<<"Angle 2 :";
    cin>>ang2 ;
    cout<<"Angle 3 :";
    cin>>ang3 ;
    int sum = ang1+ang2+ang3;
    if(sum==180){
        cout<<"The Triangle is Valid";
    }
    else{
        cout<<"This is an invalid Triangle";
    }
    return 0;
}