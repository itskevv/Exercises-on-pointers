#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int *aa,*bb;
	cout<<"Enter three numbers: ";
	cin>>a>>b;
	aa=&a;
	bb=&b;
	cout<<"Sum: "<<*aa+*bb<<endl;
	cout<<"Difference: "<<*aa-*bb<<endl;
	cout<<"Product: "<<*aa**bb;
}