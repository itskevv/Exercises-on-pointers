#include<iostream>
using namespace std;
int main()
{
	int marks,*mrks;
	cout<<"Enter your marks: ;
	cin>>marks;
	mrks=&marks;
	
	switch(*mrks)
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
