#ifndef STUD_
#define STUD_

class Student{

	private:
		int id;
		char*  name;
		char* address;
		int mark1;
		int mark2;
		int mark3;
		//char* degree;
		static int passingperc;
		
		public:
			//constructors
			Student();
			Student(int id,char*  nm,char* addr,int m1,int m2,int m3);
			virtual ~Student();
			
			//Setter method
			void setId(int id);
			void setName(char* nm);
			void setAddress(char* addr);
			void setMark1(int m1);
			void setMark2(int m2);
			void setMark3(int m3);
			//void setDegree(char* deg);
			
			//getter method
			int getId();
			const char* getName();
			const char* getAddress();
			int getMark1();
			int getMark2();
			int getMark3();
			//const char* getDegree();
			
			//display
			virtual void display() const;
			
};

#endif
