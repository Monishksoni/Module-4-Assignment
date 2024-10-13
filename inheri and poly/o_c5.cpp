#include<iostream>
using namespace std;
class demo
{
	private :
		int x;
		int y;
	public :
	demo()
	{
		cout<<"\n riya ";
	}	
	demo(demo &obj)
	{
		x = obj.x;
		y = obj.y;
	}
	void set(int a, int b)	
	{
		x=a;
		y=b;
	}
	void get()
	{
		cout<<"\n value ="<<x;
		cout<<"\n valur = "<<y;
	}
    
};
int main()
{
	demo d1;
    d1.set(5,6);
	d1.get();
	demo d3(d1);
	d3.get();
	demo d4=d3;
	d4.get();
	return 0;
}
