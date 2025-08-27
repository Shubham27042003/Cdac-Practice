#include<iostream>
using namespace std;
bool isPrime(int num){
	if(num<2)
		return false;
	for(int i=2;i<=num/2;i++){
		if(num%i==0)
			return false;
	}
	return true;
}
int main(){

	cout<<"Prime numbers between 1 to 100 are"<<endl;
	for(int i=1;i<=100;i++){
		if(isPrime(i)){
			cout<<i<<", ";
		}
	}

	return 0;
}
