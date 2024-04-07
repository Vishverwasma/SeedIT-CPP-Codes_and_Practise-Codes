//Quiz Question From Seed-IT

#include<iostream>
#include<fstream>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int ch,ch1;
	string q,s;
	stringstream p(q);
	string op1,op2,op3,op4,ans;
	string name,roll,branch,ch2;
    string un,pw;
    int count=0;


	cout<<"Enter Your Selection , For : "<<endl<<"Teacher Press 1"<<endl<<"Student Press 2"<<endl;
	cin>>ch;
	if(ch==1){
		 cout<<"Enter User Name And Password ! "<<endl<<"User Name : ";
		 string un,pw;
		 cin>>un;
		 cout<<endl<<"Password : ";
		 cin>>pw;
		 if(un=="Teacher" && pw=="VERMASKING"){
		 	cout<<endl<<"Please Choose What You Wish To Do : "<<endl<<"1 for Altering Questions"<<endl<<"2 for Passed Students"<<endl<<"3 for Failed Students "<<endl;
		 	cout<<"Your Choice : ";
		 	int ch1;
		 	cin>>ch1;



		 	
			//Part For Teacher To Enter The Question with Options and Answers !
			if(ch1==1){
		 		string q,s;
				//stringstream p(q);
				string op1,op2,op3,op4,ans;
		 		ofstream f;
		 		f.open("que.txt");
		 		for(int i=0;i<10;i++){
		 			cout<<"Que : ";
					cin>>q;
					/*while(p>>s){
						s;
					}*/
					cout<<endl<<"Option - 1 : ";
		 			cin>>op1;
		 			cout<<endl<<"Option - 2 : ";
		 			cin>>op2;
		 			cout<<endl<<"Option - 3 : ";
		 			cin>>op3;
		 			cout<<endl<<"Option - 4 : ";
		 			cin>>op4;
		 			cout<<endl;
					cin>>ans;
					
					f<<q<<endl<<op1<<endl<<op2<<endl<<op3<<endl<<op4<<endl<<ans<<endl;
				 }
				 f.close();
		 		}
			 
			 
			

			 //Part For Teacher To Check Which All Student Hav3 Passed !
			  else if(ch1==2){
		 cout<<"You Opted For Passed Students ! "<<endl;
             ifstream r;
         r.open("Pass.txt");
         if(r.is_open())
		 {
		 while(true){
            r>>name>>roll>>branch;
            if(r.eof()){
               break;
            }
            cout<<name<<"\t"<<roll<<"\t"<<branch<<endl;
         }
         r.close();			 	
		 	 }

			 	 }
			 
			 
			 

			 //Part For Teacher To Check Which All Student Hav3 Failed ! 
			 else if(ch1==3){
		 cout<<"You Opted For Failed Students ! "<<endl;			 	
			 ifstream r;
         r.open("Fail.txt");
         while(true){
            r>>name>>roll>>branch;
            if(r.eof()){
               break;
            }
            cout<<name<<"\t"<<roll<<"\t"<<branch<<endl;
         }
         r.close();	

			 	
			 }
			 
			 
			 

			
	//Part Where The Teacher Fails TO Select Among whether to  Check pass/fail or TO Enter Questions ! 
	 else{
		 	cout<<"Invalid Selection ! ";
	     }
    }
		 
		 
		 
		 
	//Part Where The Teacher Fails TO Enter Correct ID or Password !
	else{
		 	cout<<"Invalid User Name And Password ! ";
	}
}





	//Part Of Code IF User Opts To Be Student !
	else if(ch==2){
		string name,roll,branch,ch2;
		cout<<"Name : ";
		cin>>name;
		cout<<endl<<"Roll Number  : ";
		cin>>roll;
		cout<<endl<<"Stream : ";
		cin>>branch;
		string pws;
		cout<<endl<<"Students Password : ";
		cin>>pws;



        
		//Part When The User Enters Correct Password !
		if(pws==roll){
			ifstream f;
			f.open("que.txt");



			for(int i=0;i<10;i++){
				f>>q>>op1>>op2>>op3>>op4>>ans;
				cout<<"Ques : ";
				//f>>q>>op1>>op2>>op3>>op4>>ans;
				cout<<q<<endl<<op1<<endl<<op2<<endl<<op3<<endl<<op4<<endl;
				
				
				
			//The Student Tries To Attempt this Question !
				cout<<"Select Your Choice : "<<endl;
			cin>>ch2;
			if(ch2==ans){
				cout<<"Correct Answer !";
                count++;
			}
			else{
				cout<<"InCorrect Answer !";
			}
			
			cout<<" "<<endl;
			
		}
			f.close();
            

            ofstream r;
            if(count>=6){
                r.open("Pass.txt",ios::app);
                r<<name<<"\t"<<roll<<"\t"<<branch<<endl;
            }
            else{
                r.open("Fail.txt",ios::app);
                r<<name<<"\t"<<roll<<"\t"<<branch<<endl;
            }
            r.close();
			}



		//Part Where The User Fails To Enter The Correct Password !
		else{
			cout<<"You are Not An Authorised User ! ";
		}
	}



	//Part If The User Opts Invalid Choice among being Teacher / Student !
	else{ 
	 cout<<"Invalid Choice ! ";
	}

}