#include<iostream>
using namespace std;
void addition(int *a,int *b,int *c){
	int sum;
	sum=*a+*b+*c;
	cout<<"the sum is: "<<sum<<endl;
}
void moyenne(int aa,int bb,int cc){
	int avg;
	avg=(aa+bb+cc)/3;
	cout<<"The average is: "<<avg;
}
int main(){
	
	int *x,*y,*z;
	int k,h,i;
	x=&k;
	y=&h;
	z=&i;
	cout<<"Enter three number: ";
	cin>>k>>h>>i;
	addition(x,y,z);
	cout<<endl<<endl;
	moyenne(k,h,i);	
}
