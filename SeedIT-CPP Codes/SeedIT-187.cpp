#include<iostream>
using namespace std;
int main(){
    //First!!
    cout<<"1st Input : ";
     int *p =new int;
     cin>>*p;
     if(*p%2==0){
        cout<<"even";
     }
     else{
        cout<<"odd";
     }
     delete p;

     //-------------
     //Second!!
     cout<<endl<<"2nd Input : ";
     int sum=0;
     int *q=new int[5];
     for(int i=0;i<5;i++){
        cin>>q[i];
     }
     for(int i=0;i<5;i++){
        sum=sum+*(q+i);
     }
     delete []q;
     cout<<sum<<endl;
     //---------------
     //Third!!
     cout<<endl<<"3rd Input : ";
     int *a=new int;
     int *b=new int;
     cin>>*a>>*b;
     cout<<*a+*b;
     delete a;
     delete b;
     //--------------
     //Forth!!
     cout<<endl<<"4th Input : ";
     cout<<endl<<"Limit : ";
     int *d=new int;
     int *c=new int[50];
     cin>>*d;
     cout<<endl<<"Input : ";
     for(int i=0;i<*d;i++){
         cin>>c[i];
     }     
     int min=c[0],max=0;
     for(int i=0;i<*d;i++){
         if(c[i]>max){
            max=c[i];
         }
         if(min>c[i]){
            min=c[i];
         }
     }
     cout<<"Minimun is : "<<min<<" And Maximum is : "<<max<<endl;
     delete c;
     delete d;
     //--------------
     //Fifth!!
     cout<<endl<<"5th Input : ";
     
     //--------------
}