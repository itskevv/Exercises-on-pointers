#include<iostream>
#include<cstring>
using namespace std;

struct employee
{
	string e_id,e_name,e_sal;	
};
struct org
{
	string org_name,org_no;
	employee k;
};

int main()
{
	org e;
	cout<<"What is your organisation name: ";
	cin>>e.org_name;
	cout<<"What is your organisation number: ";
	cin>>e.org_no;
	cout<<"What is your name: ";
	cin>>e.k.e_name;
	cout<<"What is your employee id: ";
	cin>>e.k.e_id;
	cout<<"What is your salary: ";
	cin>>e.k.e_sal;
	
	
	
	cout<<endl<<endl;
	
	cout<<"Your organisation name is: ("<<e.org_name<<")"<<" and the organisation number is: "<<e.org_no<<endl;
	cout<<endl<<"Name: "<<e.k.e_name;
	cout<<endl<<"Employee id: "<<e.k.e_id;
	cout<<endl<<"Salary: "<<e.k.e_sal;
	
}
