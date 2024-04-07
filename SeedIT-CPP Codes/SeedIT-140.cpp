#include<iostream>
using namespace std;
//Friend Function
class father;
class mother;
class brother;
class father{
     float incf;
     public:
     void getData(){
        cout<<"Fathers Salary : ";
        cin>>incf;
        cout<<endl;
    }
    friend void avg(father i1,mother i2,brother i3);
} ;
class mother{
     float incm;
     public:
     void getData(){
        cout<<"Mothers Salary : ";
        cin>>incm;
        cout<<endl;
     }
     friend void avg(father i1,mother i2,brother i3);
} ;
class brother{
     float incb;
     public:
     void getData(){
        cout<<"Brothers Salary : ";
        cin>>incb;
        cout<<endl;
     }
     friend void avg(father i1,mother i2,brother i3);
} ;
void avg(father incf,mother incm,brother incb){
     int avrg=(incf.incf+incm.incm+incb.incb)/3;
     cout<<avrg;
}
int main(){
    father f;
    f.getData();
    mother m;
    m.getData();
    brother b;
    b.getData();

    avg(f,m,b);
    return 0;
}
