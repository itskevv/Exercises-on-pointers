#include<iostream>
using namespace std;
int main()
{
	int num,i,mul,prod,*ptr;
	cout<<"Enter a number: ";
	cin>>num;
	ptr=&prod;
	for(mul=1;mul<=12;mul++)
	{
		prod=mul*num;
		cout<<mul<<" * "<<num<<" = "<<*ptr<<endl;
	}	
	cout<<endl;
}
