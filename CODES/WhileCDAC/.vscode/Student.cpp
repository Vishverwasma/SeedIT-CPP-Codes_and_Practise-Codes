#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class student{
     int rn,mrks[5];
     char sname[20],subs[5][20],branch[20],grade;
     public:
     void inputData(){
        cout<<"\nEnter The Student's Information : "<<endl;
        cout<<"\nRoll Number : ";
        cin>>rn;
        cout<<"\nStudent's Name : ";
        cin>>sname;
        cout<<"\nBranch : ";
        cin>>branch;
        cout<<"\nEnter Five Subject's Name : ";
        for(int i=0;i<5;i++){
            cout<<"\nSubjects Name : ";
            cin>>subs[i];
        }
        for(int i=0;i<5;i++){
            cout<<"\nMarks in : "<<i+1<<" Subject is : ";
            cin>>mrks[i];
        }
     }
     void calculate(){
        int i,sum=0;
    float avg;
    for(i=0;i<5;i++){
        sum=sum+mrks[i];
    }
    avg=sum/5;
    if(avg>75){
        grade='H';
    }
    else if(avg>65){
        grade='G';
    }
    else if(avg>50){
        grade='A';
    }
    else grade='F';
    }
     void display(){
        cout<<"\nRoll Number : "<<rn<<"\nStudent's Name : ";
        cout<<sname;
        cout<<"\nBranch : ";
        cout<<branch;
        cout<<"\n ** Score Card **\n";
        cout<<"\n Student : "<<sname<<endl;
        for(int i=0;i<5;i++){
            cout<<"\n Subjects Name : "<<subs[i]<<" Marks : "<<mrks[i]<<endl;
        }
        cout<<"\n Grade : "<<grade;
     }
};
// void student::calculate(){
//     int i,sum=0;
//     float avg;
//     for(i=0;i<5;i++){
//         sum=sum+mrks[i];
//     }
//     avg=sum/5;
//     if(avg>75){
//         grade='H';
//     }
//     else if(avg>65){
//         grade='G';
//     }
//     else if(avg>50){
//         grade='A';
//     }
//     else grade='F';
// }
int main(){
     student s[100];
     int i,n;
     cout<<"Number of Students : ";
     cin>>n;
     cout<<"\n";
     for(i=0;i<n;i++){
        s[i].inputData();
        s[i].calculate();
     }
     for(i=0;i<n;i++){
        s[i].display();
     }
     return 0;
}