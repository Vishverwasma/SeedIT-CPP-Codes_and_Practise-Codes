#include<iostream>
using namespace std;
class Data{
     string name;
     int age;
     int mob;
     public:
     Data(){}
     Data(string nz,int az,int mz){
        name=nz;
        age=az;
        mob=mz;
     }
     Data Compare(Data d2,Data d3){
         if(d2.age> age && d2.age>d3.age){
            return d2;
         }
         else if(d3.age> age && d3.age>d2.age){
            return d3;
         }
         else{
            return *this;
         }
     }
     void display(){
        cout<<name<<" "<<age<<" "<<mob<<endl;
     }
};
int main(){
    string n1,n2,n3;
    int a1,a2,a3;
    int m1,m2,m3;
    cout<<"Name : ";
    cin>>n1;
    cout<<endl<<"Age : ";
    cin>>a1;
    cout<<endl<<"Mobile : ";
    cin>>m1;
    cout<<"Name : ";
    cin>>n2;
    cout<<endl<<"Age : ";
    cin>>a2;
    cout<<endl<<"Mobile : ";
    cin>>m2;
    cout<<"Name : ";
    cin>>n3;
    cout<<endl<<"Age : ";
    cin>>a3;
    cout<<endl<<"Mobile : ";
    cin>>m3;
    Data d1(n1,a1,m1),d2(n2,a2,m2),d3(n3,a3,m3),d4;
    d4=d1.Compare(d2,d3);
    d4.display();
}