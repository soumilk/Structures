typedef struct  {
	private:
	int id ;
	char name[20];
	float salary;
	public:
	void input()
	{
		cout <<"Enter the employee id "<<endl;
		cin>> id;
		cout <<" enter the employee name"<<endl;
		cin>> name;
		cout <<" enter the salary of the employee"<<endl;
		cin>>salary;
	}
	void display()
	{
		cout <<" details of the employee are "<<endl;
		cout <<"Enter the employee id "<<id<<endl;
		cout <<" enter the employee name"<<name<<endl;
		cout <<" enter the salary of the employee"<<salary<<endl;			 
	}

}employee;
int main ()
{
	employee E1 , E2 , E3;
	cout <<" enter the details of the employee 1"<<endl;
	E1.input();
	cout <<" enter the details of the employee 2"<<endl;
	E2.input();
	cout <<" enter the details of the employee 3"<<endl;
	E3.input();
	cout <<" \nThe details entered are :"<<endl;
	E1.display();
	E2.display();
	E3.display();
	return 0;
}
