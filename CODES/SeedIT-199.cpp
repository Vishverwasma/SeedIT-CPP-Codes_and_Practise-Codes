#include<bits/stdc++.h>
#include<iostream>

using namespace std;
class Array{
    int a[5],sum=0;
    public:

    Array(){}

    Array(int b[]){
        for(int i=0;i<5;i++){
            a[i]=b[i];
        }
    }

    void Sum(){
        for(int i=0;i<5;i++){
            sum=sum+a[i];
        }
    }

    Array Compare(Array a2,Array a3){
         
         if(a2.sum>sum && a2.sum>a3.sum){
               return a2;
         }
         else if(a3.sum>sum && a3.sum>a2.sum){
               return a3;
         }
         else{
               return *this;
         }
    }

    void display(){
        for(int i=0;i<5;i++){
            cout<<a[i]<<" ";
        }
        cout<<" : "<<sum;
    }
};


int main(){
   int arr1[5],arr2[5],arr3[5];
   for(int i=0;i<5;i++){
     cin>>arr1[i];
   }
   for(int i=0;i<5;i++){
     cin>>arr2[i];
   }
   for(int i=0;i<5;i++){
     cin>>arr3[i];
   }

   Array a1(arr1),a2(arr2),a3(arr3),a4,a5,a6;
   a1.Sum();
   a2.Sum();
   a3.Sum();
   a4=a1.Compare(a2,a3);
   a4.display();

}