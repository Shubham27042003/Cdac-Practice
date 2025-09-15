#include"Student.h"
class PhdStudent:public Student{

	private:
		char* thsName;
		int thsMark;
		static char* degree;

		
		public:
			//constructors
			PhdStudent();
			PhdStudent(int id,char*  nm,char* addr,int m1,int m2,int m3,char* tn,int tm);
			~PhdStudent();
			
			//Setter method
			void setThesisName(char* tnsm);
			void setThesisMark(int tm);
			
			
			//getter method
			char* getThesisName();
			int getThesisMark();
			
			
			//display
			void display() const override;
			
};
