#include<iostream>
using namespace std;

void addition(int *aa, *bb,*cc,sum)
{	
	sum=*aa+*bb+*cc;
}
void moyenne()
{
	int a,b,c,sum;
	addition(a,b,c);
	cout<<"The sum is: "<<sum<<endl;
	cout<<"Average is: "<<(a+b+c)/3;
}
int main()
{
	int a,b,c;
	cout<<"Enter threee numbers: ";
	cin>>a>>b>>c;
	moyenne(a,b,c);
}
	