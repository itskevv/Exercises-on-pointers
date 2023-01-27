#include<iostream>
using namespace std;
int main()
{
	int Numbers[100],i,odd,even,s_odd=0,s_even=0;
	cout<<"Enter 15 numbers: ";
	for(i=0;i<15;i++)
	{
		cin>>Numbers[i];
	}
	int *arr[100];
	arr[100]=&Numbers[100];
	
	cout<<"Even numbers: "<<endl;
	for(i=0;i<15;i++)
	{
		if(*arr[i]%2==0)
		{
			cout<<" "<<*arr[i];
			s_even=s_even+*arr[i];
		}
	}
	cout<<endl<<"Odd numbers: "<<endl;
	for(i=0;i<15;i++)
	{
		if(*arr[i]%2!=0)
		{
			cout<<" "<<*arr[i];
			s_odd=s_odd+*arr[i];
		}
	}

	cout<<endl<<"Sum of even numbers: "<<s_even<<endl;
	cout<<"Sum of odd numbers: "<<s_odd<<endl;
}
