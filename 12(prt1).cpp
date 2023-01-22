#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	float r1,r2,del;
	float *root1,*root2;
	root1=&r1;
	root2=&r2;
	
	cout<<"Enter your quadratic equation: ";
	cin>>a>>b>>c;
	
	del=pow(b,2)-(4*a*c);
	
	if(del<0)
	{
		cout<<"Delta is less than zero there are no roots. ";
	}
	else if(del>0)
	{
		cout<<"Delta is greater than zero so there are roots. "<<endl;
		*root1=((-1*b)+(sqrt(del)))/(2*a);
		*root2=((-1*b)-(sqrt(del)))/(2*a);
		
		cout<<"Root 1 is: "<<*root1<<endl<<"Root 2 is: "<<*root2;
	}
	else if(del==0)
	{
		cout<<"Delta is equal to zero. ";
		*root1=((-1*b)+(sqrt(del)))/(2*a);
		*root2=((-1*b)-(sqrt(del)))/(2*a);
		cout<<endl<<"Your root is: "<<*root1<<endl<<"The second root is: "<<*root2;
	}
	else 
	{
		cout<<"Invalid input";
	}
}