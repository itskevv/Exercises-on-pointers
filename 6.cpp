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
	student k[100];
	cout<<"Enter how many number of students: ";
	cin>>no_stu;
	cout<<"Now enter your students info. "<<endl;
	for(i=1;i<=no_stu;i++)
	{
		cout<<endl<<"Name: ";
		cin>>k[i].name;
		cout<<"Surname: ";
		cin>>k[i].s_name;
		cout<<"Marks in Visual Basic: ";
		cin>>k[i].vb;
		cout<<"Marks in C++ programming: ";
		cin>>k[i].cpp;
		cout<<"Marks in Web design: ";
		cin>>k[i].wd;
		cout<<"Marks in Math: ";
		cin>>k[i].math;
		cout<<"Marks in Physics: ";
		cin>>k[i].phy;
		k[i].sum=k[i].vb+k[i].cpp+k[i].wd+k[i].math+k[i].phy;
		k[i].mean=k[i].sum/5;
		k[i].per=k[i].sum*100/500;
		cout<<endl<<endl;
	}
	cout<<"Now for the students marks: "<<endl;
	for(i=1;i<=no_stu;i++)
	{
		cout<<"Student: "<<k[i].name<<" "<<k[i].s_name<<endl<<endl;
		cout<<endl<<"Their mean is: "<<k[i].mean<<" and their percentage is: "<<k[i].per<<endl;
	}
	
	cout<<endl<<endl<<"Thank you";
}
