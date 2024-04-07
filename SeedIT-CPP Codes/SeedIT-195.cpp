#include<iostream>
using  namespace std;
class Data{
     int *p,size;
     public:
     Data(int x){
        p=new int[x];
        size=x;
     }
     void input(){
        cout<<"Please Enter Your Numbers Here : ";
        for(int i=0;i<size;i++){
            cin>>*(p+i);
        }
     }
     void compare(){
        cout<<endl<<"Your Output in Descending Order : "<<endl;
        int max=0;
        for(int i=0;i<size;i++){
         for(int j=i+1;j<size;j++){
           if(*(p+i)>*(p+j)){
             max=*(p+j);
             *(p+j)=*(p+i);
             *(p+i)=max;
           }
        }
        cout<<" - "<<endl<<*(p+i);
        }
     }
};
int main(){
    int x;
    cout<<"Inp : ";
    cin>>x;
    Data d(x);
    d.input();
    d.compare();
}