#include<iostream>
using namespace std;
class ab;
class ba;
class ab{
     int a[50],s1;
     public:
     
        void Data(){
        cout<<"Your First Array Length : ";
        cin>>s1;
        }
        void getData(){
        cout<<endl<<" Your Array : ";
        for(int i=0;i<s1;i++){
          cin>>a[i];
        }
     }
         friend void common(ab i1,ba i2);

};
class ba{
     int b[50],s2;
     public:
     void Data(){
        cout<<"Your Second Array Length : ";
        cin>>s2;
     }
     void getData(){
        
        cout<<endl<<" Your Array : ";
        for(int i=0;i<s2;i++){
          cin>>b[i];
        }
     }
    friend void common(ab i1,ba i2);
};
void common(ab i1,ba i2){
    int c=0;
    cout<<"Common Elements Are : ";
for(int i=0;i<i1.s1;i++){
        for(int j=0;j<i2.s2;j++){
            if(i1.a[i]==i2.b[j]){
                c=c+1;
                cout<<i1.a[i]<<"  ";
            }
        }
    }
    cout<<endl<<"Number of same elements : "<<c;
}
int main(){
    ab k;
    k.Data();
    k.getData();
    ba l;
    l.Data();
    l.getData();
    common(k,l);
    return 0;
}