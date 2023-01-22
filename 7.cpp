#include<iostream>
using namespace std;
int main()
{
	int math,phy,comp;
	int *mth=&math,*ph=&phy,*cs=&comp;
	int sum,mean;
	cout<<"Welcome your about to enter your marks. "<<endl;
	cout<<"Math in percentage: ";
	cin>>*mth;
	cout<<"Physics in percentage: ";
	cin>>*ph;
	cout<<"Comp in percentage: ";
	cin>>*cs;
	
	sum=*mth+*ph+*cs;
	mean=(sum*100)/300;
	
	switch(mean)
	{
		case 80 ... 100 :
			{
				cout<<"First class honors"<<endl;
				break;		
			}				
		case 70 ... 79 :
			{
				cout<<"Upper second class honors"<<endl;
				break;	
			}
		case 50 ... 69 :
			{
				cout<<"Lower second class honors"<<endl;
				break;	
			}
		case 40 ... 49 :
			{
				cout<<"Pass"<<endl;			
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