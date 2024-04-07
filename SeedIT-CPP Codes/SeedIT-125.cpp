#include<iostream>
using namespace std;
struct s{
     int feet,inch;
};
/*void add( struct s s1,struct s s2){
     struct s s3;
     s3.feet=s1.feet+s2.feet;
     s3.inch=s1.inch+s2.inch;
     s3.feet=s3.feet+s3.inch/12;
     s3.inch=s3.inch%12;
    cout<<"Feets : "<<s3.feet<<" Inches : "<<s3.inch;
}*/
int main(){
    struct s s1,s2,s3;
    cout<<"Your Valuse For First Structure : ";
    cin>>s1.feet>>s1.inch;
    cout<<endl<<"Your Valuse For Second Structure : ";
    cin>>s2.feet>>s2.inch;
    s3.feet=s1.feet+s2.feet;
     s3.inch=s1.inch+s2.inch;
     s3.feet=s3.feet+s3.inch/12;
     s3.inch=s3.inch%12;
   // add(s1,s2);
   cout<<"Feets : "<<s3.feet<<" Inches : "<<s3.inch;
   return 0;
}