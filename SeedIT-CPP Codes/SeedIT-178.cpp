#include<iostream>
using namespace std;
class NextPrime{
     int n,c;
     public:
     void input(){
        cout<<"Please Enter Your Prime Number : ";
        cin>>n;
        cout<<endl;
     }
     void operator++(){
        cout<<"Next Prime Number Is : ";
                
        while(true){
            n++;
            int c=0;
            for(int i=1;i<=n/2;i++){
                if(n%i==0){
                    c++;
                }
            }
            if(c==1){
                cout<<n<<endl;
                break;
            }
        }
     }
};
int main(){
    NextPrime np;
    np.input();
    ++np;
}