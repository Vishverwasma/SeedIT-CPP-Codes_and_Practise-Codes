#include<iostream>
using namespace std;
int main(){
    int p,c,m,b,comp,sum;
    double perc;
    cout<<"Marks out of 100 in each subjects: ";
    cin>>p>>c>>m>>b>>comp;
    sum=p+c+m+b+comp;
    perc=sum*100/500;
    cout<<"Percentage : "<<perc<<endl;
    cout<<"Grade :";
    if(perc<=100 && perc>=90){
        cout<<"A";
    }
    else if(perc<=89 && perc>=80){
        cout<<"B";
    }
    else if(perc<=79 && perc>=70){
        cout<<"C";
    }
    else if(perc<=69 && perc>=60){
        cout<<"D";
    }
    else if(perc<=59 && perc>=40){
        cout<<"E";
    }
    else{
        cout<<"F";
    }
    return 0;
}