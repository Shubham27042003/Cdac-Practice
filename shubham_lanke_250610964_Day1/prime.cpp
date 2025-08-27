#include<iostream>
using namespace std;
bool isPrime(int num){
	if(num<2)
	{
	 return false;
	 }
	for(int i=2;i<=num/2;i++)
	{
		if(num%2==0){
			return false;
		}
	}	
	return true;
	}
int main(){
 	int num;
	bool result;
	cout<<"enter number"<<endl;
	cin>>num;
	result=isPrime(num);
	if(result)
	{
		cout<<"number is prime"<<endl;
	}
	else{
		cout<<"number is not prime"<<endl;
	}
return 0;
}


