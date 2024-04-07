//OPERATOR OVERLOADING



#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>
using namespace std;
class M{
     int a,b;
     public:
     void input(){
        cout<<" a : ";
        cin>>a;
        cout<<" b : ";
        cin>>b;
     }
     /*Here replacing function name with 
     'operator+' or 'operator-' or 'operator*' or 'operator/'
      allows us to replace in main function too!*/
       M operator+(M x2){ 
        M x3;
        x3.a=a+x2.a;
        x3.b=b+x2.b;
        return x3;
     }
     M operator*(M x2){
        M x4;
        x4.a=a*x2.a;
        x4.b=b*x2.b;
        return x4;
     }
     M operator-(M x2){
        M x5;
        x5.a=a-x2.a;
        x5.b=b-x2.b;
        return x5;
     }
     M operator/(M x2){
        M x6;
        x6.a=a/x2.a;
        x6.b=b/x2.b;
        return x6;
     }
     void display(){
        cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
     }
};
int main(){
    M x1,x2,x3,x4,x5,x6;
    x1.input();
    x2.input();

    
    x3=x1+x2;
    x4=x1*x2;
    x5=x1-x2;
    x6=x1/x2;
    
    cout<<" + :"<<endl;
    x3.display();
    
    cout<<" * :"<<endl;
    x4.display();
    
    cout<<" - :"<<endl;
    x5.display();
    
    cout<<" / :"<<endl;
    x6.display();


    return 0;
}