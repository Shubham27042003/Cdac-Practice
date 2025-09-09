#ifndef SHU_
#define SHU_
const int SIZE=100;
class Person{

	private:
		int Id;
		char name[SIZE];
		char addr[SIZE];
		int age;
		
	public:
		//Default constructor
		Person();
		
		//Parametarised constructor
		Person(int Id,char name[SIZE],char addr[SIZE],int age);
			
		
		//Setter methods 
		void setId(int id);
		void setName( const char *name);
		void setAddr(const char * addr);
		void setAge(int age);
		
		
		//Getter methos
		int getId();
		
		const char * getName();
		
		const char *getAddress();
		
		int getAge();

		//Display user data
		void display();
		
};
#endif;
