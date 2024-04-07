#include<iostream>
using namespace std;
class marks{
      protected:
      int m1,m2,m3,m4,m5;
      public:
      void inputm(){
        cout<<"Input for m's : " ;
        cin>>m1>>m2>>m3>>m4>>m5;
      }
};
class Student:public marks{
     float s;
     public:
     void input(){
        cout<<"Input for s : " ;
         cin>>s;
     }
     void calc(){
        cout<<"Output : " ;
        int t=m1+m2+m3+m4+m5+s;
        cout<<t;
     }
};
int main(){
    Student st;
    st.input();

    st.inputm();
   
    st.calc();
}