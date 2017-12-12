struct student 
{
	int roll;
	char name [10];
	void display();
};
student input (student s0)
{
	cout <<" enter the roll no . of the student"<<endl;
	cin>>s0.roll;
	cout <<" enter the name of the student"<<endl;
	cin>>s0.name;
	return s0;
}
 void student::display (){
	cout<< name <<" "<<roll<<endl;
}
int main ()
{
	struct student S1 , S2 ;
	S2 = input(S1);
	S2.display();
	return 0;
}

