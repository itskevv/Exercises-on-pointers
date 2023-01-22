#include<iostream>
using namespace std;
int main()
{
	int math,phy,comp;
	int sum,mean;
	cout<<"Welcome your about to enter your marks. "<<endl;
	cout<<"Math in percentage: ";
	cin>>math;
	cout<<"Physics in percentage: ";
	cin>>phy;
	cout<<"Comp in percentage: ";
	cin>>comp;
	
	sum=math+phy+comp;
	mean=(sum/300)*100;
	
	switch(mean)
	{
		case 80 ... 100:
				cout<<"First class honors";
		break;	
				
		case 70 ... 79:
			cout<<"Upper second class honors";
		break;	
		
		case 50 ...69:
		{
			cout<<"Lower second class honors";
			break;
		}
		case 40 ... 49:
		{
			cout<<"Pass";			
			break;
		}
		default:
		{
			cout<<"Fail";		
			break;
		}
	}
	cout<<endl<<"Thank you";
}