#include<iostream>
using namespace std;
class Fruits{
     protected:
     int n;
     public:
     void froot(){
         cout<<"Number of Fruits : ";
         cin>>n;
         cout<<endl;

     }
};
class Apple:public Fruits{
     protected:
     int na;
     public:
     void frootapple(){
         cout<<"Number of Apple Fruits : ";
         cin>>na;
         cout<<endl;
     }
};
class Mangoes:public Fruits{
     protected:
     int nm;
     public:
     void frootmango(){
         cout<<"Number of Mango Fruits : ";
         cin>>nm;
         cout<<endl;
         
     }
};