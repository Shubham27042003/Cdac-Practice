#include<iostream>
#include"Array.h"
using namespace std;

int main(){
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	
	Array ar1(arr1);
	ar1.display();	
	Array ar2(arr2);
	ar2.display();
	
	cout<<"\nAdditon : "<<endl;
	Array res1=ar1+ar2;
	res1.display();
	
	cout<<"\nSubtraction : "<<endl;
	Array res2=ar2-ar1;
	res2.display();	
	
	return 0;
}
