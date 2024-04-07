#include<iostream>
using namespace std;
class Student{
     float m;
     int r;
     string n;
     public:
     void input(){
        cout<<"Details : ";
        cin>>n>>r>>m;
     }
     static void sortt(Student *d){
        int max=0;
        string nm;
        int roll;
        for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
            if(d[j].m>d[i].m){
                max=d[j].m;
                d[j].m=d[i].m;
                d[i].m=max;

                nm=d[j].n;
                d[j].n=d[i].n;
                d[i].n=nm;

                roll=d[j].r;
                d[j].r=d[i].r;
                d[i].r=roll;
            }
            }
        }
        cout<<endl<<" Sorted Output : "<<endl;
        for(int i=0;i<5;i++){
            cout<<d[i].n<<" "<<d[i].r<<" "<<d[i].m<<endl;
        }
     }
};
int main(){
    Student d[5];
    for(int i=0;i<5;i++){
        d[i].input();
    }
    Student::sortt(d);
}