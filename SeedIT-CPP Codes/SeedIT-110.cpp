#include<vector>
#include<iostream>
using namespace std;
int main(){
int z,i,x;
cout<<"Number Of Elements : ";
cin>>z;
vector <int> v;
for(int i=0;i<z;i++){
    cout<<"Element "<<i+1<<" : ";
    cin>>x;
    v.push_back(x);
}
int max=v[0];
for(i=0;i<z;i++){
   if(v[i]>max){
    max=v[i];
   }
}
int sum=0;
cout<<endl<<"Max is : "<<max<<endl;
for(i=0;i<z;i++){
    sum=sum+v[i];
}
cout<<"Sum Of "<<z<<" elements of vector "<<endl;
for(i=0;i<z;i++){
    cout<<"Element "<<i+1<<" : "<<v[i]<<" ";
}
cout<<" is : "<<sum;

}