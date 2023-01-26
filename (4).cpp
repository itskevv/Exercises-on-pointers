#include<iostream>
using namespace std;

int rect(int l,int w)
{	
	return l*w;
}
int main()
{
	int (*area)(int l,int w) = rect;
	int l,w;
	cout<<"Enter your length and width: ";
	cin>>l>>w;
	
	cout<<"Your area is: "<<(*area)(l,w);
}
