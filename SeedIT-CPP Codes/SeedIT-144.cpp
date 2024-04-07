#include<iostream>
using namespace std;
class Size{
    int m,cm;
    public:
    void input(){
        cout<<"Size in Meters : ";
        cin>>m;
        cout<<endl<<"Size In Centimeters : ";
        cin>>cm;
    }     
    void add(Size s2){
        Size s3;
         s3.m=m+s2.m;
         s3.cm=cm+s2.cm;


        int d=s3.m,e=s3.cm;    
        if(s3.cm>100){
           d=s3.m+s3.cm/100;
           e=s3.cm%100;
        }
        else{
            d;
            e;
        }
        cout<<d<<" meters "<<e<< "centimeters"; 
        }
    
        
    
};
int main(){
    Size s1,s2,s3;
    s1.input();
    s2.input();
    s1.add(s2);
    return 0;
}