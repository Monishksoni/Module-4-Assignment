#include<iostream>
using namespace std;
class demo
{
	public :
		
	demo()
	{
		cout<<"\n riya";
	}
	demo(string name, int roll)
	{
		cout<<"\n name = "<<name;
		cout<<"\n id = "<<roll;
	}
};
int main()
{
	demo d1("rekha",101);
	demo d3;
	demo d9;
	demo d4("vikash",102);
	return 0;
}
