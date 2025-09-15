#include<iostream>
using namespace std;
void displaySize()
    {
        cout<<"Size of INT is: "<<sizeof(int)<<" bytes"<<endl;
	cout<<"Size of SIGNED INT is: "<<sizeof(signed int)<<" bytes"<<endl;
	cout<<"Size of UNSIGNED INT is: "<<sizeof(unsigned int)<<" bytes"<<endl;
	cout<<"Size of UNSIGNED SHORT INT is: "<<sizeof(unsigned short int)<<" bytes"<<endl;
	cout<<"Size of SIGNED SHORT INT is: "<<sizeof(signed short int)<<" bytes"<<endl;
	cout<<"Size of LONG INT is: "<<sizeof(long int)<<" bytes"<<endl;
	cout<<"Size of SIGNED LONG INT is: "<<sizeof(signed long int)<<" bytes"<<endl;
	cout<<"Size of UNSIGNED LONG INT is: "<<sizeof(unsigned long int)<<" bytes"<<endl;
	cout<<"Size of FLOAT is: "<<sizeof(float)<<" bytes"<<endl;
	cout<<"Size of DOUBLE is: "<<sizeof(double)<<" bytes"<<endl;
	cout<<"Size of LONG DOUBLE is: "<<sizeof(long double)<<" bytes"<<endl;
	cout<<"Size of CHAR is: "<<sizeof(char)<<" bytes"<<endl;
	cout<<"Size of UNSIGNED CHAR is: "<<sizeof(unsigned char)<<" bytes"<<endl;
	cout<<"Size of SIGNED CHAR is: "<<sizeof(signed char)<<" bytes"<<endl;
   }
int main(){
	displaySize();
	return 0;
}
