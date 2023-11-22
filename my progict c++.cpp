#include <iostream>
using namespace std;

class clsperson
{
private:
	int _Id;
	int _Salary;
	string _FirastName;
	string _LastName;
	string _Email;
	string _Phoni;
	string _Title;
	string _Department;
public:
	clsperson(int id,int salary,string title,string debartmint, string firastname, string lastname, string email, string phoni)
	{
		_Id = id;
		_Salary = salary;
		_FirastName = firastname;
		_LastName = lastname;
		_Email = email;
		_Phoni = phoni;
		_Title = title;
		_Department = debartmint;

	}
	
	int Id()
	{
		return _Id;
	}
	void setSalary(int salary)
	{
		_Salary = salary;
	}
	int Salary()
	{
		return _Salary;
	}
	void setTitle(string title)
	{
		_Title = title ;
	}
	string Title()
	{
		return _Title;
	}
	void setDebartmint(string debartmint)
	{
		_Department = debartmint;
	}
	string Debartmint()
	{
		return _Department;
	}
	void setFirastName(string firastname)
	{
		_FirastName = firastname;
	}
	string FirastName()
	{
		return _FirastName;
	}
	void setLastName(string lastname)
	{
		_LastName = lastname;
	}
	string LastName()
	{
		return _LastName;
	}
	string FullName()
	{ 
		return _FirastName + " " + _LastName;
	}
	void setEmail(string email)
	{
		_Email = email;
	}
	string Email()
	{
		return _Email;
	}
	void setPhoni(string phoni)
	{
		_Phoni = phoni; 
	}
	string Phoni()
	{
		return _Phoni;
	}
	void Sendemail(string supject, string body)
	{
		cout << "\n The Following Messege Sent Successfully To Email" << _Email << endl;
		cout << " supject " << supject << endl;
		cout << " body " << body << endl;
	}
	void Sendsms(string sms)
	{
		cout << "\n The Following SMS Sent Successfully To Phone :" << _Phoni << endl;
		cout << " Sms is " << sms << endl;
	}

	void print()
	{
		cout << "\n      ( Info )      ";
		cout << "\n--------------------------------";
		cout << "\n ID          : " << _Id;
		cout << "\n Salary      : " << _Salary;
		cout << "\n Title       : " << _Title;
		cout << "\n Department  : " << _Department;
		cout << "\n FirastName  : " << _FirastName;
		cout << "\n LastName    : " << _LastName;
		cout << "\n FullName    : " << FullName();
		cout << "\n Email       : " << _Email;
		cout << "\n Phoni       : " << _Phoni;
		cout << "\n---------------------------------";
	}			 
};

int main()
{

	clsperson person1(1021305,15000,"A25","Developers", "Mahmoud", "ELAshiy", "My@gmail.com", "01098209454");
	person1.print();

	person1.Sendemail("Hi, ","How Are You ?");
	person1.Sendsms("Are You Fine !");

	system("pause>0");
  return 0;
}  



