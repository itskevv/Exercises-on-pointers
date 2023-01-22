#include<iostream>
#include<cstring>
using namespace std;

struct student
{
	float vb,cpp,wd,math,phy,sum=0,mean,per;
	string name,s_name;
};
int main()
{
	int no_stu,i;
	student k;
	cout<<"Enter how many number of students: ";
	cin>>no_stu;
	cout<<"Now enter your students info. "<<endl;
	for(i=1;i<=no_stu;i++)
	{
		cout<<"Name: ";
		cin>>k.name;
		cout<<"Surname: ";
		cin>>k.s_name;
		cout<<"Marks in Visual Basic: ";
		cin>>k.vb;
		cout<<"Marks in C++ programming: ";
		cin>>k.cpp;
		cout<<"Marks in Web design: ";
		cin>>k.wd;
		cout<<"Marks in Math: ";
		cin>>k.math;
		cout<<"Marks in Physics: ";
		cin>>k.phy;
		k.sum=k.vb+k.cpp+k.wd+k.math+k.phy;
		k.mean=k.sum/5;
		k.per=k.sum*100/500;
		cout<<endl<<endl;
		
		cout<<"Student: "<<k.name<<" "<<k.s_name;
		cout<<endl<<"Their mean is: "<<k.mean<<" and their percentage is: "<<k.per<<endl;
	}
	cout<<endl<<endl<<"Thank you";
}