#include<iostream>
using namespace std;
class marks{
    private:
    int roll;
    string name;
    float m1,m2,m3;
    public:
    void input(){
        cin>>roll>>name>>m1>>m2>>m3;
    }
    void calc(){
        int tot=m1+m2+m3;
        int perc=tot/3;
        cout<<name<<" with Roll Number "<< roll<<" has obtianed Percent for total marks : "<<tot<<" is : "<<perc<<" % .";
    }
};
int main(){
    marks m;
    m.input();
    m.calc();
    return 0;
}