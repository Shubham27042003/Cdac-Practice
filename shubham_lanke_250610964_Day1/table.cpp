#include<iostream>
using namespace std;
void displayTable(int num){
	for(int i=1;i<=10;i++)
	  {
           cout<<num<<"X"<<i<<"="<<num*i<<endl;
	  }
  }	
int main(){
	int num;
	cout<<"enter number"<<endl;
	cin>>num;
	displayTable(num);
	return 0;
	}
