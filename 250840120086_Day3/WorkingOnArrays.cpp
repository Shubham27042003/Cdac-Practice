/*2.Write a program using  1D array of integers.
write a function to accept data in 1D array, and display data from array

display following menu, write separate function for each option
1. find maximum
2. find minimum
3. find addition of all numbers
4. search a number
5. find all numbers divisible by given number
   ---- if user enters 7 then find all numbers from array which are divisible by 7
6. find average of all numbers which are divisible by 6*/

#include<iostream>
using namespace std;
void accept(int *arr){
	cout<<"enter numbers of array"<<endl;
	for(int i=0;i<10;i++)
	{	
		cin>>arr[i];
	}
}
void display(int *arr){
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
}	
int maxNum(int *arr){
	int max=-9999; 
	for(int i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int minNum(int *arr){
	int min=9999; 
	for(int i=0;i<10;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
int addition(int *arr){
	int sum=0;
	for(int i=0;i<10;i++){
		sum=sum+arr[i];	
	}
	return sum;
}
bool searchNum(int * arr,int num){
	for(int i=0;i<10;i++){
		if(arr[i]==num){
			return true;
		}	
	}
	return false;
}
void divisibleByNum(int *arr,int num){
	for(int i=0;i<10;i++){
		if(arr[i]%num==0){
			cout<<num<<" ";
		}
	}
}

float averageOfNum(int * arr,int num){
	int sum=0,count=0;
	for(int i=0;i<10;i++){
		if(arr[i]%num==0){
			sum+=arr[i];
			count++;
		}
	}
	float avg=(float)sum/count;
	return avg;
	
}


int main(){
	int arr[10];
	bool search;
	int num,ch,max,min,snum,divNum,add;
	float average;
	accept(arr);
	display(arr);
	cout<<endl;
	do{
	cout<<"1.find maximun"<<endl;
	cout<<"2.find minimum"<<endl;
	cout<<"3.find addition of all numbers"<<endl;
	cout<<"4.search a number"<<endl;
	cout<<"5.find all numbers divisible by given number"<<endl;
	cout<<"6.find average of all numbers divisible by 6"<<endl;
	cout<<"7.exit"<<endl;
	cout<<"enter yur choice"<<endl;
	cin>>ch;
	
	switch(ch){
		case 1:max=maxNum(arr);
		       cout<<"maximum number is :"<<max<<endl;
			break;
		case 2:min=minNum(arr);
		       cout<<"minimum number is :"<<min<<endl;
			break;
		case 3:add=addition(arr);
		       cout<<"addtion is:"<<add<<endl; 
			break;
		case 4:cout<<"enter number you want to search"<<endl;
			cin>>snum;
			search=searchNum(arr,snum);
			if(search){
				cout<<"number is present"<<endl;
				}
			else{
				cout<<"not present"<<endl;
			}
			cout<<"number is:"<<search<<endl;
			break;
		case 5:cout<<"enter number"<<endl;
			cin>>divNum;
			divisibleByNum(arr,divNum);
			break;
		case 6:average=averageOfNum(arr,6);
			cout<<"average is"<<average<<endl;
			break;
		case 7:cout<<"Thank you"<<endl;
			break;
		}
	}while(ch!=7);
	
	
	return 0;
	
}
