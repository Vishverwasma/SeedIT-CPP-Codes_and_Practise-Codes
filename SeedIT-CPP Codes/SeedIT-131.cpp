#include<iostream>
using  namespace std;
class two{
    int rn[2],pn[2];
    string n[2];
    public:
    void input(){
        for(int i=0;i<2;i++){
            cin>>rn[i]>>pn[i]>>n[i];
            cout<<endl;
        }
    }
    void output(){
        for(int i=0;i<2;i++){
        cout<<rn[i]<<" "<<pn[i]<<" "<<n[i]<<endl;
        }
    }
};
int main(){
     two t;
    t.input();
    t.output();
    return 0;
}