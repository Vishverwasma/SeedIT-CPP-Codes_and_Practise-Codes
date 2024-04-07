#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Size :";
cin>>n;
int a[50],sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int x;
cout<<"Sum of number of elements : ";
cin>>x;
for(int i=0;i<n;i++){
if(i%x==0 &&i!=0){
    cout<<sum<<endl;
    sum=0;
}
sum=sum+a[i];
}
cout<<sum;
return 0;
}