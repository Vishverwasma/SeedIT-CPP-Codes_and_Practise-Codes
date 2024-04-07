#include<iostream>
using namespace std;
int main(){
    int amt,charge;
    cout<<"Enter the amount :";
    cin>>amt;
    if(amt>0 && amt<=100){
        charge=amt*2;
    }
    else if(amt>100 &&amt<=200){
        charge=(100*2)+((amt-100)*3);
    }
    else if(amt>200 && amt<=300){
        charge=(100*2)+(100*3)+((amt-200)*4);
    }
    else{
        charge=(100*2)+(100*3)+(100*4)+((amt-400)*3);
    }
    cout<<"Charged as :"<<charge<<endl;
    return 0;
}