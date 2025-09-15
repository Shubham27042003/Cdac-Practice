#include<iostream>
using namespace std;
void numberOfNotesRequired(int amount)
{	int count;
	if(amount>=2000)
	{
		count=amount/2000;
		amount%=2000;
		cout<<"2000 X "<<count<<"="<<2000*count<<endl;
	}
	if(amount>=500)
	{
		count=amount/500;
		amount%=500;
		cout<<"500 X "<<count<<"="<<500*count<<endl;
	}
	if(amount>=100)
	{
		count=amount/100;
		amount%=100;
		cout<<"100 X "<<count<<"="<<100*count<<endl;
	}
	if(amount>=50)
	{
		count=amount/50;
		amount%=50;
		cout<<"50 X "<<count<<"="<<50*count<<endl;
	}
	if(amount>=10)
	{
		count=amount/10;
		amount%=10;
		cout<<"10 X "<<count<<"="<<10*count<<endl;
	}
	if(amount>=5)
	{
		count=amount/5;
		amount%=5;
		cout<<"5 X "<<count<<"="<<5*count<<endl;
	}
	if(amount>=2)
	{
		count=amount/2;
		amount%=2;
		cout<<"2 X "<<count<<"="<<2*count<<endl;
	}
	if(amount>=1)
	{
		count=amount/1;
		amount%=1;
		cout<<"1 X "<<count<<"="<<1*count<<endl;
	}

}
int main(){
	int amount;
	cout<<"enter amount"<<endl;
	cin>>amount;
	cout<<"amount = "<<amount<<endl;
	numberOfNotesRequired(amount);

}
