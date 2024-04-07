#include<iostream>
using namespace std;

class DiffSeq{
    int num;
    char ch;
    public:
    DiffSeq(int n, char c){
        num=n;
        ch=c;
    }
    DiffSeq(char c,int n){
        num=n;
        ch=c;
    }
    void print(){
        cout<<num<<" "<<ch<<endl;
    }
    void print1(){
        cout<<num<<" "<<ch<<endl;
    }
};

int main(){

    char c;int n;
    cout<<"Your Number And Character :";
    cin>>n>>c;
     DiffSeq ds(n,c);
     ds.print();
     DiffSeq ds1(c,n);
     ds1.print();
}