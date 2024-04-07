#include<iostream>
using namespace std;
class Student{  
     int roll;
     string name;
     float marks;
     public:
     void input(){
        cout<<"Roll Number : ";
        cin>>roll;
        cout<<endl<<"Name :";
        fflush(stdin);
        getline(cin,name);
        cout<<endl<<"Marks : ";
        cin>>marks;
     }
     void compare(Student s2,Student s3){
        cout<<"The Highest Score Is  Obtained By : ";
        if(marks>s2.marks && marks>s3.marks){
         cout<<roll<<"\t"<<name<<"\t"<<marks;
        }
        if(s2.marks>marks && s2.marks>s3.marks){
         cout<<s2.roll<<"\t"<<s2.name<<"\t"<<s2.marks;
        }
        if(s3.marks>marks && s3.marks>s2.marks){
         cout<<s3.roll<<"\t"<<s3.name<<"\t"<<s3.marks;
        }
     }
};
int main(){
     Student s1,s2,s3;
     s1.input();
     s2.input();
     s3.input();
     s1.compare(s2,s3);
     return 0;
     
}