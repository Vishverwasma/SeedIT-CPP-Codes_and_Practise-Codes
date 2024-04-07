#include<iostream>
using namespace std;
class parent{
     protected:
     int a[5];
     public:
     virtual void calculate(){}
     void input(){
        cout<<endl<<"Input : ";
        for(int i=0;i<5;i++){
        cin>>a[5];
     }
     }
};
class child1:public parent{ 
    public:
     void calculate(){
        int max=0;
        for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){
                if(a[i]<a[j]){
                    max=a[j];
                    a[j]=a[i];
                    a[i]=max;
                }
            }
        }
     
        for(int i=0;i<5;i++){
            cout<<a[i]<<" ";
        }
     }
};
class child2:public parent{ 
     public:
     void calculate(){
        int max=0;

        for(int i=0;i<4;i++){
                if(a[i]>max){
                    max=a[i];
                }
        }
         cout<<"max="<<max;
    }
};
class child3:public parent{ 
     void calculate(){
        int min=a[0];
        for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){
                if(a[i]<min){
                    min=a[i];
                }
            }
        cout<<min;
    }
}
};
int main(){
    parent x;
    parent *p;
    child1 c1;
    child2 c2;
    child2 c3;
    p=&c1;
    p->input();
    p->calculate();
    p=&c2;
    p->input();
    p->calculate();
    p=&c3;
    p->input();
    p->calculate();
}