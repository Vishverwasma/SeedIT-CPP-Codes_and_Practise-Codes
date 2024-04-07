#include<iostream>
usiing namespace std;
cahr * mrstrcat(char *tar,char *sou){
    int i,j;
    char *t=tar;
    for(i=0;tar[i]!='\0';i++);
    while(*tar++=*sou++)
    return t;
}
int main() {
    
    char str[15];
    cout<<"Enter Your String : ";
    getline(cin,str);
    char tar[20];
    mystrcat(&str,&tar);
    cout<<endl<<" New String Comes Out To Be : "<<tar;
    return 0;
}