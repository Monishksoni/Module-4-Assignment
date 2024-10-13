//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class  BankAccount
{
	private :
			double account_number;
			double balance;
	public :
	void setvalue(double a_n, double b)
	{
		account_number=a_n;
		balance=b;
	}	
	void deposit(double amount)
	{
		cout<<"\n "<<amount <<"credited";
		balance=balance+amount;
	}
	void withdrawn(double amount)
	{
		cout<<"\n "<<amount <<"debited ";
		balance= balance-amount;
	}	
	void getvalue()
	{
		cout<<"\n account number = "<<account_number;
		cout<<"\n balance is = "<<balance;
	}
	
	
};
int main()
{
    BankAccount	b1;
    b1.setvalue(123466,45000);
    b1.getvalue();
    b1.deposit(25000);
    b1.withdrawn(20000);
 // b1.getvalue(); 
	return 0;
}

//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
/*#include<iostream>
using namespace std;
class BankAccount
{
	private :
		double acountno;
		double balance;
	public :
		void set(double a,double b)
		{
			acountno = a;
			balance = b;
		}
		void deposit(double amount)
		{
			cout<<"\n"<<amount<<" Rs. credited";
			balance = balance + amount;
		}
		void withdraw(double amount)
		{
			if(balance>amount)
			{
				cout<<"\n"<<amount<<" Rs. debited";
				balance = balance - amount;
			}
			else
			{
				cout<<"\nYour account balance is = "<<balance;
				cout<<"\nYou can not withdraw "<<amount;
			}
		}
		void get()
		{
			cout<<"\nCurrent balance = "<<balance;
		}
};
int main()
{
	BankAccount b1;
	b1.set(123456,10000);
	b1.get();
	b1.deposit(5000);
	b1.withdraw(10000);
	b1.get();
	return 0;
}*/
