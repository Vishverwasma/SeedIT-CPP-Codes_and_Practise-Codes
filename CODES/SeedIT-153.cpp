#include<iostream>
using namespace std;
class stringy{
    protected:
    string str,X;
    public:
    void inout(){
        
        cout<<"Our String : ";
        cin>>str;
        cout<<endl;
        X=str;
    }
};
class sorty:public stringy{
     protected:
     char swap=0;
     public:
     void sort(){
         cout<<endl<<"Sorting :"<<endl;     
         char swap=0;
        
         for(int i=0;i<str.length()-1;i++){
         for(int j=i+1;j<str.length();j++){
         if(str[i]>str[j]){
        swap=str[i];
        str[i]=str[j];
        str[j]=swap;
    }
   }
  }
  for(int i=0;i<str.length();i++){
   cout<<str[i];
   cout<<" ";
  }
   cout<<endl;
   }
};
class pelen:public sorty{
     public:
     string rev;
     int c=0,d;
     void reverse(){

        d=X.length();
        cout<<"Reverse : ";
        for(int i=d-1;i>=0;i--){
            rev=rev+X[i];
        }
        cout<<rev;
        cout<<endl;
     }
     void pelendrome(){
            //cout<<"v="<<rev;
        d=X.length();
            if(X==rev){
                c=c+1;
            }
            else{
                c=0;
            }
            if(c==d){
                cout<<"Pelendrome ! ";
            }
            else{
                cout<<"Not Pelendrome!";
            }
        cout<<endl;
     }
};
int main(){
    pelen p;
    p.inout();
    p.sort();
    p.reverse();
    p.pelendrome();
}