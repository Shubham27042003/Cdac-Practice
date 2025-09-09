#include<iostream>
using namespace std;

void fiboNacci(int n)
{	cout<<"Fibonacci series : ";
	if(n==1){
		cout<<n-1<<endl;
		return;
	}else if(n<1){
		return;
	}
	int n1=0;
	int n2=1;
	cout<<n1<<" "<<n2<<" ";
	for(int i=2;i<n;i++){
		int n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		
	}

}

int main(){

	int n;
	cout<<"Enter no. : "<<endl;
	cin>>n;
	fiboNacci(n);
	return 0;
}
