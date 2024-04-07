#include<iostream>
using namespace std;
int main(){
    int total=80000,m,w,im,lm,iw,lw;
    m=52*80000/100;
    lm=35*m/100;
    im=m-lm;
    w=80000-m;
    lw=(48-35)*w/100;
    iw=w-lw;
    cout<<" Total :"<<endl;
    cout<<"Men :"<<m<<" , women : "<<w<<endl;
    cout<<" Literate :"<<endl;
    cout<<"Men :"<<lm<<" , women : "<<lw<<endl;
    cout<<" Illiterate :"<<endl;
    cout<<"Men :"<<im<<" , women : "<<iw<<endl;    
    return 0;
}