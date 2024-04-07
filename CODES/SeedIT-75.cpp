#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size :";
    cin>>n;
    int a[100],b,z,p=0,sum=0,max=0,o;
    cout<<"Elements :";
    for(int i=0;i<n;i++){
     cin>>a[i];
    }
    cout<<"Number of sets :";
    cin>>b;
    //cout<<"To Find :";
    //cin>>o;
    for(int i=0;i<n;i++){
        
        if(i%b==0 && i!=0){
            p=p+1;
        
           if(sum>max){
           max=sum;
           z=p;
        }
          cout<<" :"<<sum;
            sum=0;
             cout<<endl;
            
        }
        
        sum=sum+a[i];
        cout<<a[i]<<" ";
  
    }
    cout<<endl<<"Location of Max sum : "<<z;
    return 0;
}