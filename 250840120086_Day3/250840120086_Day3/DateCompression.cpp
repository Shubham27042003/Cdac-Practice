#include<iostream>
using namespace std;

int compressed(int dd, int mm, int yy){
	 yy=yy<<9;
	 mm=mm<<5;
	int c=yy|mm;
	int p=c|dd;
	return p;
}
void decompressed(int result) {
    int dd   = result& 31;             
    int mm   = (result >> 5) & 15;      
    int yyyy = (result >> 9) & 2047;
	cout<<dd<<"-"<<mm<<"-"<<yyyy;
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
