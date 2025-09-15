#include"Student.h"
class MscStudent:public Student{

	private:
		int spSubMark;
		int langMark;
		static char* degree;

		
		public:
			//constructors
			MscStudent();
			MscStudent(int id,char*  nm,char* addr,int m1,int m2,int m3,int sm,int lm);
			~MscStudent();
			
			//Setter method
			void setSpecialSubMark(int sm);
			void setLangMark(int lm);
			
			
			//getter method
			int getSpecialSubMark();
			int getLangMark();
			
			
			//display
			void display() const override;
			
};
