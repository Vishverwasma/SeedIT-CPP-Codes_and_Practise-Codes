#include<iostream>
using namespace std;
int main(){
    float fer,cel;
    cout<<"Temp in fahrenheit :";
    cin>>fer;
    cel=(5.0/9.0)*(fer-32);
    cout<<"Temp in Calcius :"<<cel;
    return 0;
}