#include<iostream>
#include"MscStudent.h"
#include"PhdStudent.h"

using namespace std;

int main(){
	Student ob(1,"asd","pune",55,56,57);
	ob.display();
	Student *std=new Student(2,"qwe","mumbai",67,78,76);
	std->display();
	
	MscStudent ob1(1,"asd","pune",55,56,57,65,66);
	ob1.display();
	MscStudent *mstd=new MscStudent(2,"qwe","mumbai",67,78,76,80,88);
	mstd->display();

	PhdStudent ob2(1,"asd","pune",55,56,57,"herb",67);
	ob2.display();
	PhdStudent *pstd=new PhdStudent(2,"qwe","mumbai",67,78,76,"herb",65);
	pstd->display();
	
	
	return 0;
	
}
