//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
class Circle 
{
	private :
		int radius;
	public :
		void display(int r)
		{
			radius=r;
		}
		void display()
		{
			cout<<"\n area of circle is = "<<3.14*radius*radius;
			cout<<"\n circumferance is circle = "<<2*3.14*radius;
	    }
};
int main()
{
	int radius;
	cout<<"\n enter radius = ";
	cin>>radius;
	Circle c1;
	c1.display(radius);
	c1.display();
}

