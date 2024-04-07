#include<iostream>
using namespace std;
struct demo{
     int r;
     string n;
     float m;
};
int main(){
    int x;
    cout<<"Of Size : ";
    cin>>x;
    cout<<endl;
      demo d[5];
      int max=d[0].m;
      string top;
      for(int i=0;i<x;i++){
         cout<<"Value For "<<i+1<<" : ";
         cin>>d[i].r>>d[i].n>>d[i].m;
      }
      for(int i=0;i<x;i++){
         if(d[i].m>max){
            max=d[i].m;
            top=d[i].n;
         }
      }
      cout<<"Topper is "<<top<<" with marks "<<max;
      return 0;
}