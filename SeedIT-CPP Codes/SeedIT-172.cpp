#include<bits/stdc++.h>
#include<sstream>
#include<iostream>
#include<vector>

using namespace std;

class Polymorphism2{
     public:
      void show(int a){
        int b,c=a,d=0;
        while(a!=0){
            b=a%10;
            d=d*10+b;
            a=a/10;
        }
        if(c==d){
            cout<<"Your Number Is A Pelendrome!"<<endl;
        }
        else{
            cout<<"Sorry try Another Number as this is not a Pelendrome Number!"<<endl;
        }
     }
       
     void show(int a ,int b){
        cout<<"Prime Numbers Between "<<a<<" and "<<b<<" : "<<endl;
        int n;
        for(n=a;n<=b;n++){
            int c=0;
            for(int i=1;i<=n/2;i++){
                if(n%i==0){
                    c=c+1;
                }
            }
            if(c==1){
                cout<<n<<" is Prime ! "<<endl;
            }
        }
     }
      
     void show(int a,int b,int c){
        int max1=0,max2=0;
        if(a>b && a>c){
        if(b>c){
            max1=a;
            max2=b;
        }
        else if(c>b){
            max1=a;
            max2=c;
        }
        }
        else if(b>a && b>c){
        if(a>c){
            max1=b;
            max2=a;
        }
        else if(c>a){
            max1=b;
            max2=c;
        }
        }
        else if(c>b && c>a){
        if(b>a){
            max1=c;
            max2=b;
        }
        else if(a>b){
            max1=c;
            max2=a;
        }
        }
        cout<<"Second Greatest Number Is : "<<max2<<endl;
       
}
};
int main(){
    int num1,num2,num3,num4,num5,num6;
    
     cout<<"Number To Check Pelendrome : ";
    cin>>num1;
      
    cout<<endl<<"Number to Check Prime From : ";cin>>num2;
    cout<<" to ";cin>>num3;
     
    cout<<endl<<"Number To Check The Second Greatest Among : ";cin>>num4>>num5>>num6;
      
    cout<<endl<<endl<<endl;
    Polymorphism2 p;
       p.show(num1);


    p.show(num2,num3);


       p.show(num4,num5,num6);
    
}