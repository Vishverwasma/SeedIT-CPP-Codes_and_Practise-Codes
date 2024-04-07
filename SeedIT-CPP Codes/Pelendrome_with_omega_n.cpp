#include<iostream>
using namespace std;
int main(){
    int i,j;
    string a;
    cout<<"Enter The String You Wish to check : ";
    getline(cin,a);
    int s=a.length();
    int c=0;
    for(i=0,j=s-1;i<s,j>=0,i!=j;i++,j--){
        if(a[i]!=a[j]){
            cout<<"Not a Pelendrome";
            break;
        }
        c++;
    }
    if(c==s/2){
        cout<<"String "<<a<<" is a Pelendrome!";
    }
    return 0;
}