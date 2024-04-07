#include<bits/stdc++.h>
using namespace std;
class triangle{
     int s1,s2,s3;
     float sp;
     public:
     void inp(){
        cout<<"Side 1 : "; 
        cin>>s1;
        cout<<"Side 1 : "; 
        cin>>s2;
        cout<<"Side 1 : ";
        cin>>s3; 
        cout<<endl;
     }
     void SemiPerimeter(){
         sp=(s1+s2+s3)/2;
         cout<<endl;
     }
     void area(){
        float area=sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
        cout<<"Area Of Triangle Comes Out To Be : "<<area<<endl;
        cout<<endl;

     }
     void peri(){
        float perim=s1+s2+s3;
        cout<<"Perimeter Of Triangle Comes Out To Be : "<<perim<<endl;
        cout<<endl;
     }
};
int main(){
     triangle t;
     
     t.inp();
     t.SemiPerimeter();
     t.area();
     t.peri();
     return 0;
}