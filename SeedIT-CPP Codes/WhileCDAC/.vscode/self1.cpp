#include<iostream>
using namespace std;
class self1{
     int m,n,o;
     public:
     self1(){
        int *ptr=NULL;
     }
   self1(int &i,int &j,int &k){
         m=i;
         n=j;
         o=k;
   }
     const self1 operator+(self1 const& b){
        self1 a;
        a.m=m+b.m;
        a.n=n+b.n;
        a.o=o+b.o;
        return a;
     }
     self1(const self1& b){
          m=b.m;
          n=b.n;
          o=b.o;
       }
   //   ~self1(){
   //     delete[]a;
   //   }
   //   void setdata(){
       
   //   }
   //   void getdata(){
       
   //   }
     void display(){
       cout<<m<<" "<<n<<" "<<o<<endl;
     }
};
int main(){
     int a,b,c;
     cin>>a>>b>>c;
     self1 obj1(a,b,c);
     cin>>a>>b>>c;
     self1 obj2(a,b,c);
     self1 obj3=obj1+obj2;
     obj3.display();
     self1 obj4(obj3);
     cout<<endl;
     obj4.display();
}