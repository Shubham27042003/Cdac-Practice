#include<iostream>
using namespace std;
void calculate(){
int sum=0,product=1,count=0;
char ch;
	float avg;
	do{
	int num; 
	
	cout<<"enter number"<<endl;
	cin>>num;
	sum+=num;
	product*=num;
	count++;
	cout<<"for exit press q"<<endl;
	cin>>ch; 
	}while(ch!='q');
	avg=(float)sum/count;
	cout<<"average is "<<avg<<endl;
	cout<<"product is "<<product<<endl;}
int main(){
	calculate();
	return 0; 
}
