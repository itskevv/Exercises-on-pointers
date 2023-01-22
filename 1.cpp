#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float volume,rad;
	float pi=(22/7);
	float *r;
	r=&rad;
	cout<<"Enter your radius: ";
	cin>>*r;
	
	volume=(4*pi*pow(*r,3))/3;
	
	cout<<"Your volume is: "<<volume;
}