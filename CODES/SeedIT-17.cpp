#include<iostream>
using namespace std;
int main(){
    int l,b,r,ra,rp,ca,cc;
    cout<<"length :";
    cin>>l;
    cout<<"Breadth :";
    cin>>b;
    cout<<"Radius :";
    cin>>r;
    ra=l*b;
    rp=2*(l+b);
    ca=3.14*r*r;
    cc=2*3.14*r;
    cout<<"Area of Rectangle :"<<ra<<endl;
    cout<<"Perimeter of Rectangle :"<<rp<<endl;
    cout<<"Area of Circle :"<<ca<<endl;
    cout<<"Circumference of Circle :"<<cc<<endl;
    
    return 0;
}