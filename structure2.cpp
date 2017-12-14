#include<iostream>
using namespace std;

typedef struct {
	char name[12];
	int roll;
	struct DOB{
		int day ;
		int month;
		int year ;
		};
		DOB dob;
	char branch[5];
	void input ()
	{
		cout <<" Enter the details of the student : "<<endl;
		cout <<"\n Enter Roll.no :";
		cin>>roll;
		cout <<"\n Enter Name :";
		cin>>name;
		cout <<"\n Enter Date of birth :";
		cin>> dob.day >> dob.month >> dob.year;
		cout <<"\n Enter the branch"<<endl;
		cin>>branch;
	}
	void display()
	{
		cout <<"\n"<<roll <<" "<<name<<" "<<dob.day <<"-"<<dob.month<<"-"<<dob.year<<" "<<branch;
	
}student;
int main ()
{
	student S1,S2,S3;
	cout <<" enter the details of First student"<<endl;
	S1.input();
	cout <<" enter the details of Second student"<<endl;
	S2.input();
	cout <<" enter the details of Third student"<<endl;
	S3.input();
	cout <<" \nThe details entered are "<<endl;
	S1.display();
	S2.display();
	S3.display();
	return 0;	
}
	}
