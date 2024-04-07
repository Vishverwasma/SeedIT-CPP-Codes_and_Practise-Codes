#include<iostream>
using namespace std;
class rectcirc{
    float len,brd;
    float rad;
    public:
    void inp(){
        cout<<"Length :";
        cin>>len;
        cout<<endl<<"Breadth :";
        cin>>brd;
      
    }
    
    void recta(){
        float aoc;
       aoc=len*brd;
       cout<<"Area : "<<aoc<<endl;
    }
    void rectp(){
        float perimeter;
       perimeter=2*(len+brd);
       cout<<" Perimeter : "<<perimeter<<endl;
    }

     
     void inop(){
        cout<<endl<<"Radius : ";
        cin>>rad;
     }
     void aoc(){
        float aoc;
        cout<<"Area : ";
        aoc=3.14*rad*rad;
        cout<<aoc<<endl;
     }
    void cfof(){
        float cf;
        cout<<"Circumference : ";
        cf=2*3.14*rad;
        cout<<cf<<endl;
     }

};
int main(){
    rectcirc r;
    r.inp();
    r.recta();
    r.rectp();
    r.inop();
    r.aoc();
    r.cfof();
    return 0;
}