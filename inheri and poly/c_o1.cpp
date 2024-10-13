#include<iostream>
using namespace std;
class Student 
{
	private :
		int roll=101;
		string name="riya";
	public :
		int rol=102;
		string Name = "rekha";
	void display()
	{
		cout<<"\n roll is = "<<roll;
		cout<<"\n name is = "<<name;
	}	
//    int setvalue()
//    {
//    	return roll;
//	}
};
int main()
{
	Student s1;
	cout<<"\n roll = "<<s1.rol;
	cout<<"\n name = "<<s1.Name;
	s1.display();
}
