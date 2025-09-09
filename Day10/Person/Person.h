#include"Address.h"
class Person{
	private:
	   int id;
	   char *name;
	   Address addr;    //object of address class (HAS-A relationship)
	   static int count;
	   
	   public:
	   
	   	//constructor
	   	Person();
	   	Person(const char* name,const char * str,const char* ct,const char* st,int pn);
	   	//destructor
	   	~Person();
	   	
	   	//setters
	   	void setId(int id);
	   	void setName(const char* name);
	   	void setAddress(const char * str,const char* ct,const char* st,int pn);
	   	
	   	//getters
	   	int getId();
	   	const char* getName();
	   	Address& getAddress();
	   	//display
	   	void display();
};
