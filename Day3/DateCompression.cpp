#include<iostream>
using namespace std;

int compressed(int dd, int mm, int yy){
	int a=dd<<15;
	mm=mm<<11;
	int b=a|mm;
	int c=b|yy;
	return c;
}

void decompressed(int result){
	//int yy=result&2047;
	int yy=result|0;
	result=result>>11;
	//int mm=result&15;
	int mm=result|0;
	result=result>>4;
	int dd=result;
	cout<<"Compressed date is: "<<dd<<"-"<<mm<<"-"<<yy<<endl;
}

int main(){
	int dd,mm,yy,result;
	cout<<"Enter the today's date in (dd-mm-yy) "<<endl;
	cin>>dd;
	cin>>mm;
	cin>>yy;
	result=compressed(dd,mm,yy);
	cout<<"Converted date is: "<<result<<endl;
	decompressed(result);
	return 0;
}
