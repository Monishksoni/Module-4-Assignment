//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person
{
	private :
		string name;
		int age;
		string country;
	public :
	void setvalue(string n, int a, string c)
	{
	    name=n;
		age=a;
		country=c;	
	}
	void getvalue()
	{
	    cout<<"\n name = "<<name;
		cout<<"\n age = "<<age;
		cout<<"\n country = "<<country;	
	}	
};
int main()
{
	Person p1,p2;
	p1.setvalue("riya",23,"india");
	p2.setvalue("riyan",24,"USA");
	p1.getvalue();
	p2.getvalue();
	return 0;
}
