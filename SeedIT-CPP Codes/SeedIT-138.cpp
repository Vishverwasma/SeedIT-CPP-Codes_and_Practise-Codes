#include<bits\stdc++.h>
using namespace std;
class Employee{
     string name,add;
     int yoj,x=0,y=0;
     string b,c;
     public:
     void getData(){
    cout<<"enter name;";
        fflush(stdin);
        getline(cin,name);
        cout<<"enter yoj";
        cin>>yoj;
        cout<<"enter add";
        fflush(stdin);
        getline(cin,add);
     }
     void out(){
        
        
        cout<<name<<"\t"<<yoj<<"\t"<<add<<"\n";
     }    
};
int main(){
    int sn;
    Employee e[50];
    cout<<"Number Of Names : ";
    cin>>sn;
    
    cout<<endl<<endl<<"Name "<<"\t"<<"Year Of Joining "<<"\t"<<"Address "<<"\t"<<endl; 
    for(int i=0;i<sn;i++){
      e[i].getData();
    }
    
    cout<<endl<<endl<<"Name "<<"\t"<<"Year Of Joining "<<"\t"<<"Address "<<"\t"<<endl; 

    for(int i=0;i<sn;i++){
      e[i].out();
    }
     
    return 0;
}