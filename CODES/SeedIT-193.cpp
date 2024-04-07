#include<iostream>
using namespace std;
class Data{
     int *p;
     int size;
     public:
     Data(int x){
        p=new int[x];
        size=x;
     }
     void input(){
        cout<<endl<<"Please Do Enter Your Numbers : "<<endl;
        for(int i=0;i<size;i++){
            cin>>*(p+i);
        }
     }
     void minmax(){
        int max=0;
        for(int i=0;i<size;i++){
            if(*(p+i)>max){
                max=*(p+i);
            }
        }
        cout<<max<<" ! "<<endl;
     }
     ~Data(){
        delete p;
     }
};
int main(){
     Data a(5);
     a.input();
     a.minmax();
     Data b(7);
     b.input();
     b.minmax();
     Data c(3);
     c.input();
     c.minmax();
}