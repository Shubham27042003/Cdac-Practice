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
	int n,count=0,i=1;
	cout<<"Enter Number"<<endl;
	cin>>n;
	while(count!=n){
		if(isPrime(i)){
			cout<<i<<", ";
			count++;
		}
		i++;
	}

	return 0;
}
